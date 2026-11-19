#include<iostream>
using namespace std;
int main(){
    int arr[3][5];  // arr[row][column]
    arr[1][3] = 21;
    cout<<arr[1][3]<<endl;
    cout<<arr[2][0]<<endl; // this returns the garbage values
    return 0;
}