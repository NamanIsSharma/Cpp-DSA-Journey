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
#include <iostream>
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
}