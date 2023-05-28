#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int width,height;
};
int main(int argc, char** argv){
    struct Rectangle rect = {10,20};
    struct Rectangle *ptr= &rect;
    cout<<"width: "<<ptr->width<<" height: "<<ptr->height<<endl;
    delete [] ptr;

    struct Rectangle *ptrarray;
    ptrarray =  new struct Rectangle[10] ;

    for (int i = 0; i < 10; i++)
    {
        ptrarray[i].width = i;
        ptrarray[i].height = i+10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<"count : "<<i<<" width: "<<ptrarray[i].width<<" height: "<<ptrarray[i].height<<endl;
    }

    delete [] ptrarray;
    
    return 0;
}