/* #include <iostream>
using namespace std;
int main(){
    cout << "Naman\nSharma";
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main(){
    int age = 25;
    cout << sizeof(age)<<"\n";

    char grade = 'A';
    cout<< sizeof(grade)<<"\n";             // data types

    float PI = 3.14f;
    cout<< sizeof(PI)<<"\n";

    bool safe = false;
    cout<< sizeof(safe)<<"\n";

    double price = 100.89;
    cout<<sizeof(price);
}*/

/* #include <iostream>
using namespace std;
int main(){
    char grade = 'A';                   // type conversion
    int value = grade;
    cout<< value;
}*/

/*#include<iostream>
using namespace std;
int main(){
    double price = 99.09;              // type casting
    int newPrice = (int)price;
    cout<<newPrice;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Your age is "<<age;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Value of a: ";               // sum of two no.
    cin>>a;
    cout<<"Value of b: ";
    cin>>b;
    int sum = a+b;
    cout<<"sum of a&b is "<<sum;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int a = 10, b;
    b = a++;
    cout<< "a = "<< a <<" b = "<< b;

    b = ++a;
    cout<< "\na = "<< a <<" b = "<< b;      // unary operator

    b = a--;
    cout<< "\na = "<< a <<" b = "<< b;

    b = --a;
    cout<< "\na = "<< a <<" b = "<< b;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";         // +ve & -ve no
    cin>>n;
    if(n>=0){
        cout<<"n is positive";
    }
    else{
        cout<<"n is negative";
    }
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: ";            // voting eligiblity
    cin>>age;
    if(age>=18){
        cout<<"Eligible to vote";     
    }
    else{
        cout<<"Not Eligible to vote";
    }
}*/

/* #include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a%2==0){
        cout<<"Even";                  // odd-even
    }
    else{
        cout<<"Odd";
    }
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;;

    if(marks>=90 && marks<=100){
        cout<<"A";
    }
    else if(marks>=80 && marks<90){      // grading of marks
        cout<<"B";
    }
    else if(marks>=70 && marks<80){
        cout<<"C";
    }
    else if(marks>100){
        cout<<"Invalid Marks";
    }
    else{
        cout<<"D";
    }
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase";           // lowercase-UPPERCASE
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"UPPERCASE";
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";      
    cin>>n;

    cout<<(n%2==0 ? "even" : "odd");      // ternary operator
    return 0;
}*/

//////////////////////////////   LOOPS   ////////////////////

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";        // print numbers using while
    cin>>n;
    int count = 1;
    while(count<=n){
        cout<<count<<"\n";
        count++;
    }
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++){       // print no using for
        cout<<i<<" ";
    }
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n,sum=0,i=1;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n){               // sum using while
        sum=sum+i;
        i++;
    }
    cout<<sum;
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){     // sum using for
        sum = sum+i;
    }
    cout<<sum;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n, oddSum = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i=i+2){          //oddsum
        oddSum += i;
    }
    cout<<"odd sum = "<<oddSum;
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n, evenSum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){           //even sum
        if(i%2==0)
        evenSum+=i;
    }
    cout<<"Even Sum = "<< evenSum;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n=10;
    int i=1;
    do{                    // using do-while print no.
        cout<<i<<" ";
        i++;
    }
    while(i<=n);
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    bool isPrime = true;             // Prime Number
    for(int i=2; i<=n-1; i++){
        if(n%i==0) //non-Prime
        isPrime = false;
        break;
    }
    if(isPrime==true)
    cout<<"Prime Number";

    else
    cout<<"Non-Prime Number";

    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows: ";
    cin>>n;

    cout<<"Enter columns: ";        rectangle of *
    cin>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<< endl;
    }
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){       // sum of n no's
        if(i%3==0)                 // divisible by 3
        sum+=i;
    }
    cout<<"sum = "<<sum;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int n, fact = 1;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){        
        fact = fact*i;              // Factorial using loop
    }
    cout<<"Factorial = "<<fact;

    return 0;
}*/







