#include<iostream>
using namespace std;

void set(int Arr[],int i,int j,int value){
        if(i==j){
            Arr[i]=value;
        }
}

int get(int Arr[],int i,int j){
    if (i==j)
    {
        return Arr[i];
        /* code */
    }
    return 0;    
}
int main()
{
    int size;
    cout <<"Enter the size of the matrix" << endl;
    cin >> size;
    cout <<endl;
    int Arr[size];
     for(int i=0; i<size; i++){
        int x;
        cout <<"enter the matrix element at diagonal "<<i<<i<< endl;
        cin>>x;
        set(Arr,i,i,x);
     }
    cout <<"Diagonal matrix given below : " << endl;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << " "<<get(Arr,i,j)<<" ";
        }
        cout << endl;
    }


    
    return 0;
}