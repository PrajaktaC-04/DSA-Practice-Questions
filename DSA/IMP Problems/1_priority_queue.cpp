#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int> pq;
    //max heap
    // pq.push(5);
    // pq.push(10);
    // pq.push(15);
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;

    //min heap
    pq.push(-5);
    pq.push(-10);
    pq.push(-15);
    cout << -pq.top() << endl;
    pq.pop();
    cout << -pq.top() << endl;
    return 0;
}