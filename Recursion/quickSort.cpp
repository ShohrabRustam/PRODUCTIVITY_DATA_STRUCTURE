// C code to implement quicksort

#include <iostream>
using namespace std;

// Function to swap two elements
void swapping(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
    return;
}

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
	// Choosing the pivot as last element
	int pivot = arr[high];

	// Index of smaller element and indicates
	// the right position of pivot found so far
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {

		// If current element is smaller than the pivot
		if (arr[j] < pivot) {

			// Increment index of smaller element
			i++;
			swapping(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index
void quickSort(int arr[], int low, int high)
{
	if (low < high) {

		// pi is partitioning index, arr[p]
		// is now at right place
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

// Driver code
int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

	// Function call
	quickSort(arr, 0, sizeOfArray - 1);

	cout << "Sorted array : ";

	for (int i = 0; i < sizeOfArray; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

	return 0;
}
