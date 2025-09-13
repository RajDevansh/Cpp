#include<iostream>
using namespace std;
int main(){
    int marks[]={23,45,67,89};
    int *a=marks;
    cout<<*a<<endl; // Output the first element of the array using pointer
    cout<<*(a+1)<<endl; // Output the second element of the array using pointer
    cout<<*(a+2)<<endl; // Output the third element of the array using pointer
    cout<<*(a+3)<<endl; // Output the fourth element of the array using pointer
    return 0;
}