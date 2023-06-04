#include <iostream>
using namespace std;
void func(int n)
{
    int static d = 1;
    cout << d << " ";
    d++;
    if (n>1){
        func(n-1);
    }else{
        cout <<"BASE CONDITIONS DONE" << endl;
    }
    
    cout<< d << " ";
  
}

int main(int argc, const char** argv) {
    func(5);
    return 0;
}