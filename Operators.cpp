#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=3;

    // Performing various arithmetic operations
    cout<<a+b<<endl;//Addition of a and b
    cout<<a-b<<endl;//Subtraction of a and b
    cout<<a*b<<endl;//Multiplication of a and b
    cout<<a/b<<endl;//Division of a and b
    cout<<a%b<<endl;//Modulus of a and b
    cout<<a++<<endl;//Post-increment of a
    cout<<a--<<endl;//Post-decrement of a
    cout<<++a<<endl;//Pre-increment of a
    cout<<--a<<endl;//Pre-decrement of a

    //Using comparison operators
    cout<<(a==b)<<endl;//Equality check
    cout<<(a!=b)<<endl;//Inequality check
    cout<<(a>b)<<endl;//Greater than check
    cout<<(a<b)<<endl;//Less than check
    cout<<(a>=b)<<endl;//Greater than or equal to check
    cout<<(a<=b)<<endl;//Less than or equal to check

    //Using logical operators
    cout<<((a==b) && (a>b))<<endl;
    cout<<((a==b) || (a>b))<<endl;
    cout<<(!(a==b))<<endl;
    return 0;
}