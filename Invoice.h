#ifndef InvoiceTenFive
#define InvoiceTenFive

class Invoice{
        //Represents billing Invoice to sum total amount owed for services
private:
    int invoiceId;
    int dollarsOwed;

public:

    void Invoice(int set_invoiceId){};

    void addServiceCost(int costDollars){};
        
    int getDollarsOwed(){};

    int getInvoiceId(){};
};
#endif