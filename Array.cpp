#include<iostream>
using namespace std;
int main(){
    int marks[]={23,45,67,89}; // Array of integers
    cout << marks[0] << endl; // Output the first element of the array
    cout << marks[1] << endl; // Output the second element of the array
    cout << marks[2] << endl; // Output the third element of the array
    cout << marks[3] << endl; // Output the fourth element of the array

    int mathmarks[4]; // Declares the size of the array as 4
    mathmarks[0] = 23; // Assigns value 23 to the first element of the array
    mathmarks[1] = 45; // Assigns value 45 to the second element of the array
    mathmarks[2] = 67; // Assigns value 67 to the third element of the array
    mathmarks[3] = 89; // Assigns value 89 to the fourth element of the array

    //To change value at a specific index
    marks[2] = 100; // Changes the value of the third element to 100

    //Loop through the array to print all elements
    for(int i = 0; i < 4; i++){
        cout<<marks[i]<< endl; // Output each element of the array
    }
}