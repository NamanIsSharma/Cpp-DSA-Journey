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
#include <iostream>
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
    cin >> n;

    cout << countdigit(n) << endl;
    return 0;
}