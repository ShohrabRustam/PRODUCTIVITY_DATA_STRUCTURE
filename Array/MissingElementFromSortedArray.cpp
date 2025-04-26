#include <iostream>
using namespace std;
int main(int argc, char **arg){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,13,14,15,16,17,18};
    int sizeofArray = sizeof(arr)/sizeof(arr[0]);
    int lastElement = arr[sizeofArray-1];
    int sumOfNaturalNumber = lastElement * (lastElement+1)/2;
    int sumOfArray = 0;
    int missingTerm;
    for(int i=0; i<sizeofArray; i++){
        sumOfArray += arr[i];
    }
    missingTerm = sumOfNaturalNumber - sumOfArray;
    cout <<"Missing term " << missingTerm << endl;
    return missingTerm;
}