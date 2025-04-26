#include<iostream>
using namespace std;

void set(int Arr[],int size){
    
}
int main()
{
    int size;
    cout <<"Enter the size of the matrix" << endl;
    cin >> size;
    int Arr[size];
    cout << "Enter the diagonal matrix" << endl;
    for(int i=0; i<size; i++)
        cin >> Arr[i];

    cout <<"Diagonal matrix given below : " << endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == j){
                cout <<" "<< Arr[i]  <<" ";
            }else{
                cout <<" "<<0<<" ";
            }
        }
        cout << endl;
    }
    
    return 0;
}