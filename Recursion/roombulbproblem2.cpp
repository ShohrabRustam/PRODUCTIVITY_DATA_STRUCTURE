#include <iostream>
using namespace std;
//  Write a program make a program for the give sync_problem
//  there are n nested rooms (room inside room )
//   1. Go to next room 
//   2. Switch on Blub
void  SwitchonBlub(int n){
    cout << " Light is on of room " << n << endl;
    return;
}
void recursive_fun(int n){
    if (n>0){
    SwitchonBlub(n);
    recursive_fun(n-1);
    }
    return;
}
int main(int arg,char **argv){
    int n= 5;
    recursive_fun(n);
    cout <<endl;

}