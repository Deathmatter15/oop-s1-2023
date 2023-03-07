#include <iostream> 
extern int sum_min_max(int integers[], int length), array_min(int integers[], int length),
array_max(int integers[], int length);
using namespace std;

int main(){
    int lyrilusc_ensemble_robin[7] = {1,2,3,4,5,6,7};
    cout << sum_min_max(lyrilusc_ensemble_robin, 7) << endl;
    cout << array_min(lyrilusc_ensemble_robin, 7) << endl;
    cout << array_max(lyrilusc_ensemble_robin, 7) << endl;
return 0;
}