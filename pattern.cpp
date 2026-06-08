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
        char ch = 'A';
        for(int j=0; j<=(n-1); j++){  //inner loop
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}*/

////////////// Square pattern (123-456-789)//////////
#include<iostream>
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
}