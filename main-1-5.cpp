#include <iostream> 

extern int count_evens(int number);

int main () {
    std::cout << count_evens(7) << "\n";
    return 0;
}