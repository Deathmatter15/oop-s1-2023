#include <iostream> 
extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
using namespace std; 

int main(){
    int palindrome_array[5] = {1,3,0,3,1};
    int false_array[5] = {1,2,3,4,5};
    
    cout << sum_if_palindrome(palindrome_array, 5) << endl; 
    cout << is_palindrome(palindrome_array, 5) << endl;
    cout << sum_array_elements (palindrome_array, 5) << endl;
    
    cout << sum_if_palindrome(false_array, 5) << endl; 
    cout << is_palindrome(false_array, 5) << endl;
    cout << sum_array_elements (false_array, -4) << endl;


return 0;
}