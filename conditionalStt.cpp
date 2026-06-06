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

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";      
    cin>>n;

    cout<<(n%2==0 ? "even" : "odd");      // ternary operator
    return 0;
}