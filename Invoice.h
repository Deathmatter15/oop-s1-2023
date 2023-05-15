#ifndef InvoiceTenFive
#define InvoiceTenFive
#include <iostream>
#include <string>
class Invoice{
        //Represents billing Invoice to sum total amount owed for services
private:
    std::string invoiceId;
    int dollarsOwed;

public:

    Invoice(std::string set_invoiceId);
    void addServiceCost(int costDollars);  
    int getDollarsOwed();
    std::string getInvoiceId();
};
#endif