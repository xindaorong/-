#include "Cserver.h"
#include "HttpConnection.h"
#include <iostream>
#include<memory>
#include <utility>
Cserver::Cserver(boost::asio::io_context&ioc,unsigned short&port):_ioc(ioc),
_acceptor(ioc,tcp::endpoint(boost::asio::ip::tcp::v4(),port)),_socket(ioc){

}
void Cserver::Start()
{
    auto self=shared_from_this();//返回当前对象的shared_ptr
    //捕获当前的shared_ptr
    _acceptor.async_accept( _socket,[self](beast::error_code ec) { 
        try
        {
          //出错则放弃这个连接，继续监听新链接
          if(ec)
          {
            self->Start();
            return;
          }
          //处理新链接，创建hpptConnection类管理新连接
          std::make_shared<HttpConnection>(std::move(self->_socket))->Start();//_socket存在知识点
          
          //继续监听新链接
          self->Start();
        }
        catch(std::exception&e)
        {
            std::cerr<<"Exception:"<<e.what()<<std::endl;
            self->Start();
          //异常处理
        }
    });

}
