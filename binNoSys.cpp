////// Decimal to Binary ////
#include<iostream>
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
}