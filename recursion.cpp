//////////////////////////  RECURSION    ///////////

/* #include <iostream>
using namespace std;
int count = 0;
void print() {
    if(count == 3) return; //Base_Condition

    cout << count << endl;
    count++;
    print();
}

int main() {
    print();
    return 0;
}*/

/// printing name using recursion ///
/* #include <iostream>
using namespace std;
int n = 0;
void name(){
    if(n==5) return;
    cout << "Naman" << endl;
    n++;
    name();
}
int main() {
    name();
    return 0;
}*/

//// printing 1 to n /////
/* #include <iostream>
using namespace std;
void print1N(int i, int n){
    if(i>n) return;

    cout << i << endl;
    print1N(i+1,n);
}
int main() {
int n , i=1;
cout << "Enter n = ";
cin >> n;
print1N(i,n);
return 0;
}*/

////// printing n to 1 ///////
#include <iostream>
using namespace std;
void printN1(int i, int n){
    if(i<1) return; //Final stop/condn

    cout << i << endl;
    printN1(i-1,n);
}
int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = n;  //initializer after input, otherwise i will be garbage
    printN1(i,n); //fn calling
    return 0;
}