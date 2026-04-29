#include"Cserver.h"
#include"const.h"
#include"global.h"
#include"HttpConnection.h"
#include"LogicSystem.h"
#include<boost/asio.hpp>
#include<iostream>
#include<json/json.h>
#include<json/value.h>
#include<json/reader.h>
#include"ConfigMgr.h"

int main()
{
	try 
	{
		ConfigMgr gCfgMgr;
		std::string gate_port_str = gCfgMgr["GateServer"]["Port"];

		//�����˿ں�
		unsigned short gate_port = atoi(gate_port_str.c_str());
		//����1���߳�
		net::io_context ioc{ 1 };
		boost::asio::signal_set signals(ioc, SIGINT, SIGTERM);
		//必须是常量引用
		signals.async_wait([&ioc](const boost::system::error_code& error, int signal_number)
		{
			if(error)
			{
				return;
			}
			ioc.stop();
		});
	
		std::make_shared<Cserver>(ioc, gate_port)->Start();
		//������
		std::cout << "Server is running to listen to the port" << std::endl;
		ioc.run();
	}
	
	catch (std::exception const &e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
	}
}
