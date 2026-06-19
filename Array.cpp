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
}*/

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
}