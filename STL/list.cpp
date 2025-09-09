
#include<iostream>
#include<list>
using namespace std;
 
int main()
{
    list<int> l;
    l.push_back(1); 
    l.push_back(2);
    l.push_front(3);
    for(int i : l)
    cout<< i << " "; 
    l.pop_front();
    cout<<endl;
    for(int i : l)
    cout<< i << " "; 
    l.erase(l.begin());
    return 0;
}