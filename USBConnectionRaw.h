#ifndef USBConnection_H1
#define USBConnection_H1
#include <iostream>
#include <stack>
using namespace std;
    class USBConnection {
        private:
        static std::stack<int> ids;
        std::stack<int> ID;
        USBConnection();

        public:
        static USBConnection* CreateUsbConnection();
        int get_id();
        ~USBConnection();
    };
#endif