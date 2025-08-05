#include<iostream>
using namespace std;
int c=3;
int main(){
    int a,b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    c = a + b; // Using the local variable c
    cout<<"Sum of a and b is: "<<c<<endl; // Output the local variable c
    //"::" is used to access the global variable c
    cout<<::c<<endl;// Output the global variable c
    return 0;
}