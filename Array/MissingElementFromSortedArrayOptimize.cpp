#include <iostream>
using namespace std;
int main(int argc, char **arg){
    int arr[] = {7,8,9,10,11,13,14,15,16,17,18};
    int sizeofArray = sizeof(arr)/sizeof(arr[0]);
    int indexDifference = arr[0];
    int missingTerm;
    for(int i=0; i<sizeofArray; i++){
        if(arr[i]-i!=indexDifference){
            missingTerm =i + indexDifference;
            cout <<"Missing term is "<<missingTerm<<endl;
            return missingTerm;
        }
    }
   
    return 0;
}