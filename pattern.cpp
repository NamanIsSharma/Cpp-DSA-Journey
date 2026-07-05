//////// square pattern (1234)//////

/* #include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i=1; i<=n; i++){  //outer loop
        for(int j=1; j<=n; j++){  //inner loop
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

///////// square pattern (*)//////
/* #include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i=0; i<=n-1; i++){  //outer loop
        for(int j=1; j<=n; j++){  //inner loop
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

///////// square pattern (ABCD)//////
/* #include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i=0; i<=(n-1); i++){  //outer loop
        char ch = 'A';   //Yahan A ko isliye rakha, coz' nextline mein A se hi starting hogi
        for(int j=0; j<=(n-1); j++){  //inner loop
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}*/

////////////// Square pattern (123-456-789)//////////
/* #include<iostream>
using namespace std;
int main(){
    int n, num=1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<=(n-1); i++){
        for(int j=0; j<=(n-1); j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0; 
}*/

////// Right angle triangle /////
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<i+1; j++){    // inner loop logic
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

///////////////  Right angle triangle in numbers, (1-22-333-4444)
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1<<" ";            
        }
        cout<<endl;
    }
    return 0;
}*/

////////////////// charcter right angle (A-BB-CCC-DDDD)//
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    char ch ='A';
    for(int i=0; i<=(n-1); i++){
        for(int j=0; j<(i+1); j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;
}*/

/////////// (1-12-123-1234)/////
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<=(n-1); i++){
        int num = 1;
        for(int j=0; j<(i+1); j++){
            cout<<num;
            num++<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

////////// Reverse Right Triangle(1-21-321-4321)//
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<=(n-1); i++){
        for(int j=(i+1); j>=1; j--){ //since loop is reversing
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/

///////// Floyd's Triangle Pattern (1-23-456-78910)////
/* #include<iostream>
using namespace std;
int main(){
    int n, num=1;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<=(n-1); i++){
        for(int j=0; j<(i+1); j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}*/

////////// Floyd's triangle in char(A-BC-DEF-GHI)
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    char ch='A';
    for(int i=0; i<=(n-1); i++){
        for(int j=(i+1); j>0; j--){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}*/

/////////// Inverted triangle (1111-222-33-4)///
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<=(n-1); i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<(n-i); j++){
                cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}*/

//////// Pyramid Pattern (1-121-12321-1234321)//
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<=(n-1); i++){
        for(int j=0; j<(n-i-1); j++){  //spaces
            cout<<" "; 
        }
        for(int j=1; j<=(i+1); j++){   //num 1
            cout<<j;
        }
        for(int j=i; j>=1; j--){   //num 2
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/

//////// revision /////////

#include <iostream>
using namespace std;
void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    // pattern1(n);   // square of *
    pattern2(n);
    return 0;
}
