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


/* #include<iostream>
using namespace std;
int FactN(int n){
    int Fact = 1;
    for(int i=1; i<=n; i++){       // Factorial
        Fact = Fact*i;
    }
    return Fact;
}
int main(){
    cout<<"Factorial = "<<FactN(9);
    return 0;
}*/


///////////////  pass by value  /////////////
/* #include<iostream>
using namespace std;
int changeX(int x){
    x = 2*x;
    cout<<"x = "<<x<<endl;           // 10
    return 0;
}
int main(){
    int x = 5;
    changeX(x);
    cout<<"x = "<<x<<endl;          // 5
    return 0;
}*/

/* #include<iostream>
using namespace std;
int SumOfDigits(int num){
    int DigitSum = 0;

    while(num>0){
        int lastDigit = num % 10;         // Sum of Digits
        num = num/10;

        DigitSum += lastDigit;
    }
    return DigitSum;
}
int main(){
    cout<< "Sum of digits = "<< SumOfDigits(12345);
    return 0;
}*/

/////////// nCr //////////
/*#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n/(fact_r * fact_nmr);
}

int main(){
    int n = 8, r = 2;
    cout<< nCr(n,r) << endl;

    return 0;
}*/


/*#include<iostream>
using namespace std;

bool isPrime(int n){
    
    for(int i=2; i<=(n-1); i++){     /// Prime No
        if(n%i==0)
        return false;
    }
    return true;
    
}
int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout << "Prime No.";
    }
    else{
        cout<< "Non-Prime";
    }
    return 0;
}*/

//////////  Print n prime no  ///////
#include<iostream>
using namespace std;

bool isPrime(int num){               // prime fn
    for(int i=2; i<=(num-1); i++){
        if(num%i==0){
            return false;
        }
        return true;
    }
}

int printNprime(int n){          // print prime no.
    int count = 0;
    int num = 2;
    while(count<n){
        if(isPrime(num)){
            cout<<num<<" ";
            count++;
        }
        num++;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    printNprime(n);

    return 0;
}
