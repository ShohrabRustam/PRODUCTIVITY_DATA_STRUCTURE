#include<iostream>
#include<deque>
using namespace std;
 
int main()
{
    deque<int> d;
    d.push_back(1); 
    d.push_back(2);
    d.push_front(3);
    for(int i : d)
    cout<< i << " "; 
    d.pop_front();
    cout<<endl;
    for(int i : d)
    cout<< i << " "; 

    cout<<endl;
    cout<<"Element at index 1 : "<<d.at(1)<<endl;
    cout<<"Front : "<<d.front()<<endl;

    cout<< "is empty or not : "<<d.empty()<<endl;
    cout<<"Size : "<<d.size()<<endl;
    
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase : ";
    for(int i : d)
    cout<< i << " ";
    return 0;
}