#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int fun(int n)
{
    if(n==0)
        return 0;
    
    cout<<n<<" "<<endl;
    
    fun(n-1);
    
    cout<<n<<" "<<endl;

    fun(n-1);
    
    return 0;
}
int main()
{
    int n=3;
    fun(n);
    return 0;
}