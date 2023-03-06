#include <iostream> 

extern void count_digits(int array[4][4]); // "v-Type" if there is an output. 
using namespace std;

int main(){

    int row_array[4][4], series_array[4][4];
    
    int base = 0;
    for(int i=0; i<4; i++){
        
        for(int j=0; j<4; j++){
            row_array[i][j] = base; 
        }

        base +=1;
    }
    
    base = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            series_array[i][j] = base; 
            base +=1;
        }
    }

count_digits(row_array);
count_digits(series_array);
return 0;
}