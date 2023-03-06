#include <iostream> 

//A function that sums the diagonals of a 4*4 matrix

int sum_diagonal ( int array[4][4]){ 
int sum = 0, diagonal = 0; 

    while ( diagonal < 4) {
        sum += array[diagonal][diagonal];
        diagonal += 1;
    }    
    
return sum;
}