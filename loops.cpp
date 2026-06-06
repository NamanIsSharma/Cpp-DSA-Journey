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