#include <iostream>
using namespace std;
struct Rectangle{
    int width,height;
};
int main(int argc, char** argv){
    struct Rectangle rect = {10,20};
    struct Rectangle *ptr= &rect;
    cout<<"width: "<<ptr->width<<" height: "<<ptr->height<<endl;
    return 0;
}