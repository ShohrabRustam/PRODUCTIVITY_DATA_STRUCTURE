#include "Node.h"  // Include your Node definition
#include <iostream>
#include <string>
using namespace std;
int main(){
    Node *p, *q;
    p= NULL; // p = 0;
    if(p==NULL)
        cout << "p is NULL" << endl;
    else
        cout << "p is not NULL" << endl;
    if(p==0)
        cout << "p is NULL" << endl;
    else
        cout << "p is not NULL" << endl;
    if(!p)
        cout << "p is NULL" << endl;
    else
        cout << "p is not NULL" << endl;
}