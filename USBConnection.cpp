#include <iostream> 
#include <stack>
#include "USBConnectionRaw.h"

stack<int> USBConnection::ids({3, 2, 1});

USBConnection::USBConnection(){
    if(ids.size() > 0){
        ID.push(ids.top());
        ids.pop(); 
    } else {
    
    }
}

int USBConnection::get_id(){
    return ID.top(); 
}

USBConnection::~USBConnection(){
    if(ID.size() > 0){
        ids.push(ID.top());
    }
}

USBConnection* USBConnection::CreateUsbConnection(){
    if (ids.size() > 0) {
        USBConnection* Port = new USBConnection();
        return Port;
    } else {
        return nullptr;
    }
}

