#include <iostream> 
//Identify Identity Matrix
int is_identity (int array[10][10]){ 
int identity = 0;

for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        
        if ((array[i][j]==1 && i==j) || (array[i][j]==0 && i!=j)){
            identity = 1;
        }
        else {
            identity = 0;
            goto endloop;
        }
        
    }
}
endloop:
return identity; // return "v-Type" z 
}