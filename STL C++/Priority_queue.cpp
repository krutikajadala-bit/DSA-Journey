#include<bits/stdc++.h>
using namespace std;
void explainPriority_Queue(){
    // it is simply Queue but the element which has Higher value that stays at top
    // remember maximum element always stays at top in the integer maximum element,
    // it is character then largest character or if it is sting then lexiographically largest
    // Maximum Heap
    priority_queue<int> pq;

    pq.push(5);       // {5}
    pq.push(2);       // {5, 2}
    pq.push(8);       // {8, 5, 2}
    pq.emplace(10);   // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop();         // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size, swap, empty functions same as others


    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pqMin;

    pqMin.push(5);       // {5}
    pqMin.push(2);       // {2, 5}
    pqMin.push(8);       // {2, 5, 8}
    pqMin.emplace(10);   // {2, 5, 8, 10}

    cout << pqMin.top(); // prints 2

}

int main(){

    return 0;
}
// Time complexity of Priority Queue
// push():O(log n)
// emplace():O(log n)
// top():O(1)
// pop():O(log n)
// size():O(1)
// empty():O(1)