///////// Print largest number of an array

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {3,2,1,5,2};
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest)
        largest = arr[i];
    }
    cout << largest;
    return 0;
}