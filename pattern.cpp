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
#include<iostream>
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
}