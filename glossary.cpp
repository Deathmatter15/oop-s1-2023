//Library of useful commands; reminder

//loops while condtition is fulfilled. 
while(){
    //body
}

//converts string to int 
#include<string>
std::string s;
int a = std::stoi(s); 

// Library of commonly used sequences; easily copied and pasted. 

//Logic gate
if(){
    //if() >> condition1
}else if{
    //if() >> condition2
}else{
    //Alwyas >> condition3 
}

//Nested for loop 
for(int i = 0; i < ; i++){
    for (int j = 0; j < ; j++){
        //body
    }
}

//Show array function 
void display_Array(int array[][], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << array[i][j] << " ";
        }
        cout << endl; 
    }
}