#include <iostream>
using namespace std;
void recursive_function(int n ){
    if(n<=0) return;
    
    cout<<"num "<<n<<" ";

    recursive_function(n-1);
}
int main(int argc, char **argv){
    int num =10;
    recursive_function(num);
    cout<<endl;
}   