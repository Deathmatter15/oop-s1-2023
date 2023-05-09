#include <iostream>
#include "Invoice.h"

    void Invoice::Invoice(int set_invoiceId){
        invoiceId = set_invoiceId;
        dollarsOwed = 0;
        return;
    }

    void addServiceCost(int costDollars){
        if(costDollars >= 0){
            dollarsOwed += costDollars
            return;
        }else if(costDollars < 0){
            std::cout << "Invoice does not accept Negative Values" << std::endl;
            return;
        }
    }
        
    int getDollarsOwed(){
        std::cout << "You owe " << dollarsOwed << " dollars" << std::endl;
    }

    int getInvoiceId(){
        return invoiceId;
    }