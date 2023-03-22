#include <iostream>

int *readNumbers() { 
    int *array = new int[10]; 

    for( int i = 0; i < 10; i++){
        std::cin >> array[i];
    }

    return array;
}

int secondSmallestSum(int *numbers,int length) {
    int sum = 0, base = 0; 

    for(int i = 0; i < length; i++){
        for (int j = i + 1; j <= length; j++){
            sum = 0;

            for (int k = i; k < j; k++){
                sum += numbers[k];
            }

            if(j == 1){
            base = sum; 
            } else if (base > sum) {
            base = sum;
            }
        }
    }

    int sumsecondsmallest = 0; 

    for(int i = 0; i < length; i++){
        for (int j = i + 1; j <= length; j++){
            sum = 0;

            for (int k = i; k < j; k++){
                sum += numbers[k];
            }

            if(j == 1 || sumsecondsmallest == base){
                sumsecondsmallest = sum; 
            } else if (sum > base && sumsecondsmallest > sum) {
            sumsecondsmallest = sum;
            }
        }
    }

    return sumsecondsmallest; 
}