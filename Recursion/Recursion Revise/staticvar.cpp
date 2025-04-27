#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int fun(int n)
{
    static int i = 0;
    cout<<i++<<endl;
    
    if(n==0)
        return 0;
    
    int res = fun(n-1) + n;
    
    cout<<"return call "<<res<<" "<<endl;
    
    return 0;
}
int main()
{ 
    // static variable
    // static variable is used to store the value of a variable
    // even after the function call is completed
    // static variable is initialized only once
    // static variable is used to store the value of a variable
    int a = 5;
    fun(a);
    return 0;
}