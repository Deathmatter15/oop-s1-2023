#include <iostream> 
void count_digits(int array[4][4]){ // "v-Type" if there is an output. 
    int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0, 
    count_6 = 0, count_7 = 0, count_8 = 0,  count_9 = 0;
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(array[i][j] == 0){
             count_0++;
            }else if(array[i][j] == 1){
                count_1++;
            }else if(array[i][j] == 2){
                count_2++;
            }else if(array[i][j] == 3){
                count_3++;
            }else if(array[i][j] == 4){
                count_4++;
            }else if(array[i][j] == 5){
                count_5++;
            }else if(array[i][j] == 6){
                count_6++;
            }else if(array[i][j] == 7){
                count_7++;
            }else if(array[i][j] == 8){
                count_8++;
            }else if(array[i][j] == 9){
                count_9++;
            }
        }
    }
    
    std::cout << "0:" << count_0 << "1:" << count_1 << ";" << "2:" << count_2 << ";" << "3:" << count_3 << ";" << "4:" << count_4 << ";"
     << "5:" << count_5 << ";" << "6:" << count_6 << ";" << "7:" << count_7 << ";" << "8:" << count_8 << ";" << "9:" << count_9 << ";"
     <<std::endl;
    return;
}