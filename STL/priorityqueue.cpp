#include<iostream>
#include <queue>
using namespace std;
 
int main()
{
    // max heap
    priority_queue<int> maxheap;

    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(0);  
    maxheap.push(-1);  
    cout<<"Max Heap top : "<<maxheap.top()<<endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(1);
    minheap.push(2);
    minheap.push(3);
    minheap.push(0);  
    minheap.push(-1);  
    cout<<"Min Heap top : "<<minheap.top()<<endl;





    // lets try pq

    return 0;
}