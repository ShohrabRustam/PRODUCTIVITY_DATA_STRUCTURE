#include<iostream>
#include <queue>
using namespace std;
 
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);  
    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Size : "<<q.size()<<endl;
    q.pop();
    cout<<"After pop Front Element : "<<q.front()<<endl;
    cout<<"Size : "<<q.size()<<endl; 
    return 0;
}