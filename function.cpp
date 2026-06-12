/* #include<iostream>
using namespace std;
int greet(){
    cout<<"Hello"<<endl;       // Hello using fn
}
int main(){
    greet(); 
}*/

/* #include<iostream>
using namespace std;
int sum(int a, int b){    // sum using fn
    int s = a+b;
    return s;
}
int main(){
    cout << sum(10,5);
    return 0;
}*/

#include<iostream>
using namespace std;
int minOfTwoNo(int a, int b){  // parameters
    if(a<b){
        return a;
    } else{
        return b;
    }
}
int main(){
    cout<< "min = " << minOfTwoNo(5,3);  //arguments
}