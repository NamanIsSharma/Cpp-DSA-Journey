////////// Array Indexing  ///////
/* #include <iostream>
using namespace std;

int main() {
    int marks[5] = {57,78,88,90,76};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    return 0;
}*/

////////// SizeOf Array  //////
/* #include <iostream>
using namespace std;

int main() {
   // int arr[5];
   // cout << sizeof(arr);

   int marks[5] = {23,45,67,89,01};
   cout << sizeof(marks) / sizeof(int) << endl;  //size of array

   double price[10];
   cout << sizeof(price);
   return 0;
}*/

/////// loops in array  //////
/* #include <iostream>
using namespace std;

int main() {
    int marks[5] = {44,55,66,77,88};
    int size = 5;

    for(int i=0; i<size; i++){
        cout << marks[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    for(int i=0; i<size; i++){    //ForInput
        cin >> marks[i];
    }

    for(int i=0; i<size; i++){
        cout << marks[i] << endl;  //ForOutput
    }
    
    return 0;
}*/


///////////  Smallest Element in an Array  /////////////
/*#include <iostream>
#include <climits>   // for int_max
using namespace std;

int main() {
    int nums[] = {13,10,23,4,-1,2};
    int size = 6;
    
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(nums[i] < smallest){    // logic 1
            smallest = nums[i];
        }
    }
    cout << "Smallest = " << smallest << endl;
    return 0;
}*/

//////////   largest element in an array ////
/* #include <iostream>
using namespace std;

int main() {
    int size = 6;
    int nums[size];
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    int largest = INT16_MIN;
    for(int i=0; i<size; i++){
        largest = max(largest, nums[i]);
    }
    cout << "Largest = " << largest;
    return 0;
}*/


///// print Index of largest element in array  ////////////
/* #include <iostream>
using namespace std;

int main() {
    int nums[] = {12, 34, -42, 76, -89};
    int size = 5;
    int index = -1;  // -1 means index not find yet (initially)

    int largest = INT32_MIN;
    
    for(int i=0; i<size; i++){
        if(nums[i] > largest){
        largest = nums[i];
        index = i;  //index (i) of largest element
        }
    }
    cout << "largest element = " << largest << endl;
    cout << "index is : " << index << endl;
    return 0;
}*/


////////  Linear Search ////////
/* #include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;  //FOUND
        }
    }
    return -1;  //NOT FOUND
}

int main() {
    int size = 5;
    int arr[size];
    
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int target = 34;

    cout << linearSearch(arr, size, target) << endl;
    return 0;
}*/


///////////  Reverse of an Array  //////////
#include<iostream>
using namespace std;

int RevArray(int arr[], int size){
    int start = 0, end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {12,34,56,78,90};
    int size = 5;

    RevArray(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}