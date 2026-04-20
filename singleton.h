#ifndef SINGLETON_H
#define SINGLETON_H
#include <memory>
#include <mutex>
#include <iostream>
using namespace std;
template<typename T>
class Singleton {
protected:
    Singleton() = default;
    Singleton(const Singleton<T>&) = delete;
    Singleton&operator=(const Singleton<T>&st) = delete;
    static std::shared_ptr<T> _instance;
public:
    static std::shared_ptr<T> GetInstance() {
        static std::once_flag s_flag;
        std::call_once(s_flag, [&]() {
            //_instance = std::make_shared<T>();为什么不用make_shared？
            _instance = std::shared_ptr<T>(new T);
        });
        return _instance;
    }
    void PrintAddress() {
        std::cout<<_instance.get()<<std::endl;
    }    
    //析构函数
    ~Singleton() {
        std::cout<<"this is the destructor of Singleton"<<std::endl;
    }
};
template<typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;
#endif // SINGLETON_H
