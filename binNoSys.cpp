////// Decimal to Binary ////
/* #include<iostream>
using namespace std;

int DecToBin(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;  // remainder
        decNum /= 2;  // quotient
        
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}
int main(){
    int decNum = 50;

    // for(int i=0; i<=10; i++)  //dectobin(1 to 10)

    cout<< DecToBin(decNum)<<endl;
}*/ 


/////  Binary to Decimal  ////
#include<iostream>
using namespace std;

int BinToDec(int binNum){
    int ans = 0, pow = 1;
    while(binNum > 0){
        int rem = binNum % 2;
        ans += (rem*pow);

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main(){
    int binNum = 110011;
    
    cout << BinToDec(binNum) << endl;
    return 0;
}