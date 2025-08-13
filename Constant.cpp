#include<iostream>
using namespace std;
int main(){
    const int a = 10; // constant integer
    const float b = 20.5; // constant float
    const char c = 'A'; // constant character

    cout << "Constant Integer: " << a << endl;
    cout << "Constant Float: " << b << endl;
    cout << "Constant Character: " << c << endl;

    // Uncommenting the following lines will cause compilation errors
    // a = 20; // Error: cannot modify a constant variable
    // b = 30.5; // Error: cannot modify a constant variable
    // c = 'B'; // Error: cannot modify a constant variable
    return 0;
}