#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = 2*i;
    }
    return 0;
}