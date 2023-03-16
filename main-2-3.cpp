#include <iostream> 
extern bool is_array_palindrome(int integers[], int length);
extern int palindrome_sum(int integers[], int length);
extern int sum_integers(int integers[], int length);
using namespace std;

int main(){
int palindrome_array[5] = {1,2,3,2,1};
int array[5] = {1,2,3,4,5};

cout << palindrome_sum( palindrome_array, 5) << endl;
cout << palindrome_sum( palindrome_array, 0) << endl;
cout << palindrome_sum( array, 5) << endl;
return 0;
}