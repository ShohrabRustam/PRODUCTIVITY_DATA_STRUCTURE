#include <iostream>
#include <array>
using namespace std;
 
int main()
{
    int basic[3] = {10, 20, 30};
    array<int, 3> a = {10, 20, 30};
    int size = a.size();
    cout << "Size of array is " << size << endl;

    for(int i = 0; i < size; i++) {
        cout << "Enter at index " << endl;
        cin >> a[i];
    }   

    cout << "Elements of array are: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Elements of array using at() are: ";
    for (int i = 0; i < size; i++) {
        cout << a.at(i) << " ";
    }
    cout << endl; 
    cout << "First element of array is: " << a.front() << endl;
    cout << "Last element of array is: " << a.back() << endl;
    return 0;
}