///////// extraction of digits ////////
/* #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n :  ";
    cin >> n;

    while(n>0){
        int ld = n % 10;
        cout << ld;
        n /= 10;
    }
    return 0;
}*/

///////////  count the digit of a number  //////////
/* #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    int count = 0;

    while(n>0){
        int ld = n % 10;
        count++;
        n /= 10;
    }
    cout << count << endl;
    return 0;
}*/

///// using function, count digit in a no  /////
/* #include <iostream>
using namespace std;
int countdigit(int n){
    int count = 0;

    while(n>0){
        int ld = n % 10;
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n ;

    cout << countdigit(n) << endl;
    return 0;
}*/

///////// reverse of a number ///////
/* #include <iostream>
using namespace std;
int reverse(int n){
    int rev = 0;

    while(n!=0){
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << reverse(n) << endl;
    return 0;
}*/


//////////// palindrome of a number /////////////
/* #include <iostream>
using namespace std;
bool palindrome(int n){
    int rev = 0;
    int original = n;

    while(n>0){
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n /= 10;
    }
    if(rev == original) return true;
    else return false;
}

int main() {
    int n;
    cout << "Enter n : "; cin >> n;
    
    cout << palindrome(n) << endl;
    
    return 0;
}*/

///// check for Armstrong no //////////
/* #include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    int original = n; //storing original after inputing n

    while(n!=0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n /= 10;
        
    }
    if(sum == original) cout << "yes! no. is an Armstrong" << endl;
    else cout << "Not an Armstrong" << endl;
    
    return 0;
}*/

// Armstrong Using Function
/* #include <iostream>
using namespace std;
bool CheckArmstrong(int n){
    int sum = 0;
    int original = n;

    while(n>0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n /= 10;
    }
    if(sum == original) return true;
    else  return false;
}
int main() {
    int n;
    cin >> n;
    cout << CheckArmstrong(n);
    return 0;
}*/

////////// print all divisors of a number  /////////
/* #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(n%i==0) cout << i << " ";
    }
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    cout << "hello strrrr\nhello NIET";
    return 0;
}