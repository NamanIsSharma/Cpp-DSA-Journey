////////// SELECTION SORT //////////
#include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){ //outer loop
        int minm = i; // first element of subarray, (assumed to be minimum)
        for(int j=i; j<=n-1; j++){ //inner loop
            if(arr[j]<arr[minm]){
                minm = j;
            }
        }
        // swapping of minm with i(th) index
        int temp = arr[minm];
        arr[minm] = arr[i];
        arr[i] = temp;

    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i]; // way to input an array
    }
    selection_sort(arr,n); //fn calling

    //printing sorted array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}