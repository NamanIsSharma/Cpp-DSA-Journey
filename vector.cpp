//////////////////////  BASICS  ///////////////
/* #include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec(3,0);
    cout << vec[0];               // to print each index
    cout << " " << vec[1];
    cout << " " << vec[2];

    return 0;
}*/

/* #include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {'a','b','c','d','e'};

    for(char val : vec) {   // for each loop
        cout << val << " ";
    }
}*/

/// vector-functions ///
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    cout << "size = " << vec.size() << endl;  // size function

    vec.push_back(25);  // push_back function
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    cout << "size after push back = " << vec.size() << endl;

    vec.pop_back();  // pop_back function
    vec.pop_back();
    cout << "size after pop back = " << vec.size() << endl;

    cout << vec.front() << endl;  // front function

    cout << vec.back() << endl;  // back function

    cout << vec.at(1) << endl; // at function
    
}