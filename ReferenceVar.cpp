#include<iostream>
using namespace std;
float x=12;
float& y=x; // y is a reference variable to x
int main(){
    cout<<"Value of x:"<<x<<endl;
    cout<<"Value of y:"<<y<<endl;
    y=15; // changing the value of y will change the value of x
    cout<<"Value of x after changing y:"<<x<<endl;
    return 0;
}