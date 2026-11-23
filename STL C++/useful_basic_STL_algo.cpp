#include<bits/stdc++.h>
using namespace std;

// Comparator function
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    // If second elements are same
    if(p1.first > p2.first) return true;

    return false;
}

void explainExtra() {
 // Sorting an array
    int arr[] = {5, 2, 4, 1, 3};
    int n = 5; 

    sort(arr, arr+n); // it refers that the sort[start,end) 
    // where end points to the right after the last element in array or vector

    // Sorting a vector
    vector<int> v = {5, 2, 4, 1, 3};
    sort(v.begin(), v.end()); 

    // Sorting a particular portion of an array
    sort(arr+2, arr+4);

    // Sorting in descending order
    sort(arr, arr+n, greater<int>());


    // Sorting pairs
    pair<int,int> p[] = {{1,2}, {2,1}, {4,1}};
    int m = 3;

    // Sort according to second element in ascending order.
    // If second elements are equal, sort first element in descending order.
    sort(p, p+m, comp);


    // Count set bits
    int num = 7;
    int cnt = __builtin_popcount(num); // it will gives the 3.
    //because binary of 7 is 111 so number of setbits is 3

    long long bigNum = 165786578687LL;
    int cntLL = __builtin_popcountll(bigNum); // this use for the long long data type number


    // Next permutation
    string s = "123";
    sort(s.begin(),s.end());
    do {
        cout << s << endl;
    }
    while(next_permutation(s.begin(), s.end()));

    int maxVal = *max_element(arr, arr+n);
}