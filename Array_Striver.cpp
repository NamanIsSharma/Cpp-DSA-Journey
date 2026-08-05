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

/* #include <iostream>
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
}*/


//////// print second largest no from array (optimal approach with T.C = O(N))

#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[] = {1,3,4,4,7,5};

    int largest = arr[0];
    int s_largest = -1;

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            s_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > s_largest){
            s_largest = arr[i];
        }
    }
    cout << s_largest;
    return 0;
}