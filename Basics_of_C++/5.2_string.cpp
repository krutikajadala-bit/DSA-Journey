# include<iostream>
using namespace std;
int main(){
    string s = "Striver";
    int len = s.size();
    cout<< s[len-1]<<endl;
    cout << s[3]<<endl;
    s[len-1] = 'z';
    cout << s[len-1]<<endl;
    return 0;
}