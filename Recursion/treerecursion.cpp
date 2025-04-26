#include <iostream>
using   namespace std;
void recursive_function(int n){
    if(n<=0) return;

        recursive_function(n-1);
        cout<<"number "<<n<<" "<<endl;
        recursive_function(n-2);

}
int main(int argc, char **argv){
    int n = 10;
    cout <<endl;
    recursive_function(n);
    cout<<endl;
    return 0;
}