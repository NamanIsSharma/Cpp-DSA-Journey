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


///////  input-output a string /////////
/* #include<iostream>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>> s1 >> s2;
    cout<< s1 << " " << s2;
    return 0;
}*/

/////// get a multi-words string  ///////
/* #include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    cout<<str;
    return 0;
}*/


#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s = "Naman";
    int len = s.size();
    s[len-1] = 'k';
    cout << s[len-1];
    return 0;
}