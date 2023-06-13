#include <iostream>
using namespace std;
void rightShift(int A[],int index,int size){
    for(int i=size; i>index;i--)
        A[i] = A[i-1];
}

void insertElementInSortedArray(int A[],int element,int size){
    for(int i = 0; i < size;i++){
        if(element<A[i]){
            rightShift(A,i,size);
            A[i] = element;

            return;
        }
    }
    A[size-1] = element;
}

int main(int argc, char **argv){
    int sizeofp = 5;
    int *p= new int[sizeofp];
   for (size_t i = 0; i < sizeofp; i++){
        p[i] = i;
    }
    cout <<"ARRAY IS : " ;
    for (size_t i = 0; i < sizeofp; i++){
        cout << p[i] << " ";
    }
    cout <<endl;
    int sizeOfnewArray = sizeofp + 1;
    int *q= new int[sizeOfnewArray];

    for (size_t i = 0; i < sizeofp; i++)
    {
        q[i] = p[i];
    }

    delete[] p;

    p=q;

    q = NULL;

    int element;
    cout <<"Enter the element you want to insert: " << endl;
    cin >> element;

    insertElementInSortedArray(p, element,sizeOfnewArray);

    cout <<"  ARRAY IS AFTER INSERT : " ;
    for (size_t i = 0; i < sizeOfnewArray; i++){
        cout <<p[i] <<" ";
    }
    cout <<endl;
    
}