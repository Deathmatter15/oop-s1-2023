
#include "Invoice.h"

    Invoice::Invoice(std::string set_invoiceId){
        invoiceId = set_invoiceId;
        dollarsOwed = 0;
        return;
    }

    void Invoice::addServiceCost(int costDollars){
        if(costDollars >= 0){
            dollarsOwed += costDollars;
            return;
        }else if(costDollars < 0){
            std::cout << "Invoice does not accept Negative Values" << std::endl;
            return;
        }
    }
        
    int Invoice::getDollarsOwed(){
        std::cout << "You owe " << dollarsOwed << " dollars" << std::endl;
        return dollarsOwed;
    }

    std::string Invoice::getInvoiceId(){
        return invoiceId;
    }