#include<bits/stdc++.h>
using namespace std;

void expainMultiset(){
    // Multi set follows the Sorted order rule but don't follow the unique rule means allow the same value Elements in set
    // everyhting is same as set 
    // but it stores the duplicate element also
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.erase(1);  // all 1's erased

    int cnt = ms.count(1);

    // only sinle 1 is erased
    ms.erase(ms.find(1)); //deleting using iterator because through element all duplicate element is deleted

    auto first = ms.begin();
    auto last = next(first, 2);

    ms.erase(first, last);
    //rest all functions are same as Set.
}
void explainUSet() {
    unordered_set<int> st;

    // lower_bound() and upper_bound() functions
    // do not work, rest functions are same
    // as above. It does not store elements in any
    // particular order. It has better complexity of O(1)
    // than set in most cases, except sometimes
    // when collision happens. and in the very rare case or in worst case the time complexity becomes the O(n)
}

int main(){
    
        return 0;
}
// ms.erase(1)	         :  Deletes all occurrences of 1
// ms.erase(ms.find(1))	 :  Deletes one occurrence of 1
// ms.erase(first, last) : 	Deletes elements in the range [first, last)
// next(it, 3)	: Returns an iterator 3 positions ahead
// prev(it, 2)	: Returns an iterator 2 positions behind