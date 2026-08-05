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
/* #include<iostream>
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
}?*/

////////// sum of elements of an array  ///////
/* #include <iostream>
using namespace std;
int main() {
    int arr[] = {5,4,1,3,2};
    int size = 5;
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i]; // sum+=arr[i]
    }
    cout << sum; 
    return 0;
}

//////////// sum using function  ////////////
#include <iostream>
using namespace std;
int Sum_No_Array(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size = 6;
    int arr[size];
    for(int i=0;  i<size; i++){
        cin >> arr[i];
    }

    cout << Sum_No_Array(arr, size);
    
    return 0;
}*/


//////////// product of elements in an array  ////////
/* #include <iostream>
using namespace std;

Mul_No_Array(int arr[], int size){
    int product = 1;
    for(int i=0; i<size; i++){
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = 5;

    cout << Mul_No_Array(arr, size);
    return 0;
}*/


/////// swap the max & min number of an array  ////////
/* #include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12,34,43,-78,65};
    int size = 5;

    int maxValue = INT_MIN;
    int minValue = INT_MAX;

    int maxIndex = 0;
    int minIndex = 0;

    for(int i=0; i<size; i++){

        if(arr[i] > maxValue){  //Getting max value and index
            maxValue = arr[i];
            maxIndex = i;
        }
        if(arr[i] < minValue){  //Getting min value and index
            minValue = arr[i];
            minIndex = i;
        }
    }

    // swap min&max

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    for(int i=0; i<size; i++){  // array after swapping
        cout << arr[i] << " ";
    }
    return 0;
}*/


//////// max subarray sum (concept) #leetcode-53(kadane's algo - optimal approach) //////

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12,10,34,25,-43,21};
    int size = 6;

    for(int st=0; st<size; st++){    // loop for starting the subarray
        for(int end=st; end<size; end++){ // loop  for ending the subarray
            for(int i=st; i<=end; i++){ // loop for traversing array from st to end
                cout << arr[i];
            }
            cout << " ";  // basically we print max subarrays here
        }
        cout << endl;
    }
    return 0;
}  