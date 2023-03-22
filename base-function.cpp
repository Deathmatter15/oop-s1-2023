#include <iostream>

int *readNumbers() { 
    int *array = new int[10]; 

    for( int i = 0; i < 10; i++){
        std::cin >> array[i];
    }
    return array;
}

void printNumbers(int *numbers, int length){
    for( int i = 0; i < length; i++ ){
        std::cout << i << " " << numbers[i] << std::endl; 
    }
    return;
}

//Test-2-1 inputs 11, 12, 3, 4, 15, 6, 7, 8, 9, 10

void hexDigits(int *numbers, int length){
    for( int i = 0; i< length; i++){
        std::cout << i << " " << numbers[i] << " "; 

        switch(numbers[i]) {

            case 0: 
                std::cout << 0 << std::endl;
            break;

            case 1: 
                std::cout << 1 << std::endl;
            break; 

            case 2: 
                std::cout << 2 << std::endl;
            break; 

            case 3: 
                std::cout << 3 << std::endl;
            break; 

            case 4: 
                std::cout << 4 << std::endl;
            break; 

            case 5: 
                std::cout << 5 << std::endl;
            break; 

            case 6: 
                std::cout << 6 << std::endl;
            break; 

            case 7: 
                std::cout << 7 << std::endl;
            break;

            case 8: 
                std::cout << 8 << std::endl;
            break;

            case 9: 
                std::cout << 9 << std::endl;
            break;

            default: 
                std::cout << static_cast <char> ('A'+ (numbers[i]-10)) << std::endl;
            break;
        }
        std::cout << std::endl;
    }
    return;
}