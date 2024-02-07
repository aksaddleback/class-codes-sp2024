#include<iostream> 
using namespace std; 
int main() { 
    // cout << .... << .... << .... << ...;
    int x = 10; 
    cout << x++ << endl;  // eq: cout << x; x = x + 1;
    cout << x-- << endl;  // eq: cout << x; x = x - 1; 
    cout << ++x << endl;  // eq: x = x + 1; cout << x; 
    cout << --x << endl;  // eq: x = x - 1; cout << x; 
}