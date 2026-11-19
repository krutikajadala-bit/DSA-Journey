#include <bits/stdc++.h>
using namespace std;

int main(){
    //int 
    int x =10;
    // long
    long y= 15;
    // long long
    long long z =200000000000;
    cout << x << endl << y<< endl<<z<<endl; 

    // float , double
    // integer can be stored as double remember that 
    float x1=15;
    double y1=18;
    cout<<" the value of the Y is:"<<y1<<endl;

    // string , getline
    // the string will just print the input only before the space in the input and after the it is cosider as second string
    // string s;
    // cin>>s;  
    // cout<<s<<endl;
    
    // when you want to get whole line in only one command so use getline
    string s1;
    getline(cin,s1);
    cout << s1 << endl;

    //  char
    //  there are 256  characters in english dictionary and char can store all that 
    char ch = 'h';
    // cin>>ch;
    cout<<ch<<endl;


    return 0;
} 
