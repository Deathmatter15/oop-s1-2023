#include <iostream> 

void printed_scaled (int array[3][3] , int scale){ // "v-Type" if there is an output. 
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            array[i][j] = array[i][j] * scale;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return; 
}


