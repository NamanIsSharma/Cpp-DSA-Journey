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

/* #include<iostream>
using namespace std;
int minOfTwoNo(int a, int b){  // parameters
    if(a<b){
        return a;    // MinOfTwo //
    } else{
        return b;
    }
}
int main(){
    cout<< "min = " << minOfTwoNo(5,3);  //arguments
}*/

/* #include<iostream>
using namespace std;
int Sum_Of_N(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){    // sum of n no.
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<Sum_Of_N(6);
    return 0;
}*/


#include<iostream>
using namespace std;
int FactN(int n){
    int Fact = 1;
    for(int i=1; i<=n; i++){
        Fact = Fact*i;
    }
    return Fact;
}
int main(){
    cout<<"Factorial = "<<FactN(7);
    return 0;
}
