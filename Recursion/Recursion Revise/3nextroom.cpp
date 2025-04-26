#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int fun(int n)
{
    if(n==0)
        return 0;
    
    cout<< "Go To Next Room "<<endl;
    fun(n-1);
    cout<<n<<"Turn On the Bulb "<< n<< endl;
    return 0;
}
int main()
{
    int n=3;
    fun(n);
    return 0;
}