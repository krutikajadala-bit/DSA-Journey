#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised
void printName(string name){
    cout << "hey "<< name << "!"<<endl;
    return ;
}
int sum(int a , int b ){
    int c = a + b;
    return c;
}
void dosomething(int n){
    cout << n <<endl;
    n = n+5;
    cout << n <<endl;
    n=n+5;
    cout << n <<endl;
}
void passbyrefernce(string &s){
    s[0] = 't';
    cout << s<<endl;
}
int main(){
    // string s1;
    // cout << " enter the name:";
    // cin >> s1;
    // printName(s1);

    // string s2;
    // cout << " enter the name: ";
    // cin>>s2;
    // printName(s2);
    int a , b;
    cout <<"enter the numbers to be added:"<<endl;
    cin >>a>> b;
    int res = sum(a,b); 
    cout << a << "+" << b << "=" << res << endl;
//      pass by value ..
    dosomething(a);
    cout<<a<<endl;
    // pass by refernce
    string s = "raj";
    passbyrefernce(s);
    cout<<s<<endl;
    return 0;
}
// there are lot's of inbuilt functions also such as max() ,min() ,avg()  etc.....