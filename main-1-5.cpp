#include <iostream> 
extern void print_summed(int array1[3][3],int array2[3][3]);

int main(){
    int array_first[3][3] = {{2,2,2}, {2,2,2}, {2,2,2}}, array_second[3][3] ={{1,2,3}, {4,5,6}, {7,8,9}};
    print_summed(array_first,array_second);
    
return 0;
}