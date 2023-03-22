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

int *reverseArray(int *numbers, int length){

    int *array_reversed = new int[length];

    for (int i = 0; i < length; i++){
        array_reversed[i] = numbers[length-i-1];
    }
    
return  array_reversed;
}
    
