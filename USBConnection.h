#ifndef USBConnection_H
#define USBConnection_H
#include <iostream>
#include <stack>
using namespace std;
    class USBConnection {
        private:
        static std::stack<int> ids;
        std::stack<int> ID;
        
        USBConnection(){
        if(ids.size() > 0){
            ID.push(ids.top());
            ids.pop(); 
        } else {}
        };

        public:

        static USBConnection* CreateUsbConnection(){
        if (ids.size() > 0) {
            USBConnection* Port = new USBConnection();
            return Port;
        } else {
            return nullptr;
        }
        };

        int get_id() {return ID.top(); };

        ~USBConnection(){if(ID.size() > 0) {ids.push(ID.top());} };
    };

std::stack<int> USBConnection::ids({3, 2, 1});
#endif