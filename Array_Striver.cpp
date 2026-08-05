///////// Print largest number of an array

/* #include <iostream>
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
}*/


///////// Remove dublicates elements from an array

#include <iostream>
using namespace std;
int remove_dublicates(int arr[],int n){
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n = 5;
    int arr[] = {1,1,2,2,3};

    int k = remove_dublicates(arr,n); //k mein store ho gyi i+1 ki value

    cout << k << endl; // k is now new array size

    for(int i=0; i<k; i++){ // k tak iterate karenge
        cout << arr[i] << " ";
    }
    return 0;
}