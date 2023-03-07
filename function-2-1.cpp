#include <iostream> 
#include <string>

void print_binary_str(std::string decimal_number){
    int decimal = stoi (decimal_number), binary = 0, base = 1; 
    std::cout << decimal << std::endl;
    while(decimal > 0){
        binary += (decimal%2)*base;
        decimal /= 2; 
        base *= 10;
    }  

    std::cout << binary << std::endl; 
return;
}

