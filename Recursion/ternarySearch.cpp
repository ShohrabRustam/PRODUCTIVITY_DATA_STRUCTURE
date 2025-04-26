// recursive approach to ternary search
#include <iostream>
using namespace std;

int ternarySearch(int A[],int firstIndexofSubarray, int lastIndexofSubarray, int searchkey)
{
	if (lastIndexofSubarray < firstIndexofSubarray) return -1;

	
		// Find the mid1 and mid2
		int mid1 =  firstIndexofSubarray+ (lastIndexofSubarray - firstIndexofSubarray) / 3;
		int mid2 = lastIndexofSubarray - (lastIndexofSubarray - firstIndexofSubarray) / 3;

		// Check if key is present at any mid
		if (A[mid1] == searchkey) {
			return mid1;
		}
		if (A[mid2] == searchkey) {
			return mid2;
		}

		// Since key is not present at mid1 and mid2, check in which region it is present
		if (searchkey < A[mid1]) {
			// The key lies in between l and mid1
			return ternarySearch(A,firstIndexofSubarray, mid1 - 1, searchkey);
		}
		else if (searchkey > A[mid2]) {

			// The key lies in between mid2 and r
			return ternarySearch(A,mid2 + 1, lastIndexofSubarray, searchkey);
		}
		else {
			// The key lies in between mid1 and mid2
			return ternarySearch(A,mid1 + 1, mid2 - 1, searchkey);
		}

        return -1;
}

int main()
{
	int firstindex, sizeofarray, indexofresult, searchkey;

	// required sorted array for search results
	int array[] = { 19, 20, 30, 42, 51, 60, 71, 82, 93, 100 };

	// Starting index
	firstindex = 0;

	// array size or last element index
	sizeofarray = 9;


	searchkey = 51;

	// Search the key using ternarySearch
	indexofresult = ternarySearch(array,firstindex, sizeofarray, searchkey);

	cout << "Index of " << searchkey << " is : " << indexofresult << endl;

    return 0;

	}

