#include<bits/stdc++.h>
using namespace std;
void explainset(){  // in sets everyhting happens in O(logn) time complexity
//    it stores everything in sorted Order and Uniquelly
  set<int> st;

    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}
    st.insert(2);   // {1, 2}  (duplicates ignored)
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);  // points to 3

    // {1, 2, 3, 4, 5}
    auto it2 = st.find(6); // points to st.end()
    // find() returns an iterator to the element if found; otherwise, it returns st.end().
    // {1, 4, 5}
    st.erase(5);  // erases 5 // takes logarithmic time

    int cnt = st.count(1);

    auto it3 = st.find(3);
    st.erase(it3); // it takes constant time

    // Range erase
    // Assume st contains {1, 2, 3, 4, 5}

    auto i1 = st.find(2);
    auto i2 = st.find(4);

    st.erase(i1, i2);  // after erase: {1, 4, 5}
    // [first, last) — last element is not included


    // lower_bound() and upper_bound() functions
    // work in the same way as in vector.

    // Syntax:

    auto lb = st.lower_bound(2);

    auto ub = st.upper_bound(3);
}


int main(){

    return 0;
}