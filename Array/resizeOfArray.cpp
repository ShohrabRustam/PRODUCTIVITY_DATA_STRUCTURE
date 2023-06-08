#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int sizeofp = 5;
    int *p= new int[sizeofp];
   for (size_t i = 0; i < sizeofp; i++){
        p[i] = i;
    }
    cout <<" OLD ARRAY IS : " ;
    for (size_t i = 0; i < sizeofp; i++){
        cout << p[i] << " ";
    }
    cout <<endl;
    int sizeOfnewArray = 10;
    int *q= new int[sizeOfnewArray];

    for (size_t i = 0; i < sizeofp; i++)
    {
        q[i] = p[i];
    }

    delete[] p;

    p=q;

    q = NULL;

      cout <<" RESIZED ARRAY IS : " ;
    for (size_t i = 0; i < sizeOfnewArray; i++){
        cout <<p[i] <<" ";
    }
    cout <<endl;
    
}