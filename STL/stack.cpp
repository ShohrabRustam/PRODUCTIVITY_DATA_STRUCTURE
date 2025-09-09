#include<iostream>
#include<stack>
using namespace std;
 
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);  
    cout<<"Top Element : "<<s.top()<<endl;
    cout<<"Size : "<<s.size()<<endl;
    s.pop();
    cout<<"After pop Top Element : "<<s.top()<<endl;
    cout<<"Size : "<<s.size()<<endl;
    return 0;
}