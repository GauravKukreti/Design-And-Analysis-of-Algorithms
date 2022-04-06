#include <iostream>
using namespace std;

void merge(int array[], int l, int mid, int r)
{
	int n1 = mid - l + 1;
	int n2 = r - mid;

	int *left = new int[n1],
		*right = new int[n2];

	for (int i = 0; i < n1; i++)
		left[i] = array[l + i];
	for (int j = 0; j < n2; j++)
		right[j] = array[mid + 1 + j];

	int i = 0, 
		j = 0; 
	int k = l; 

	while (i < n1 && j < n2) {
		if (left[i] <= right[j]) {
			array[k] = left[i];
			i++;
		}
		else {
			array[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		array[k] = left[i];
		i++;
		k++;
	}

	while (j < n2) {
		array[k] = right[j];
		j++;
		k++;
	}
}

void mergeSort(int array[], int begin, int end)
{
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}

void check(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[1000];
        for(int i=0;i<n;i++)
          cin>>arr[i];
          
        mergeSort(arr, 0, n-1);
        check(arr,n);
    }
    return 0;
}

/*

3
8
23 65 21 76 46 89 45 32
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 12 54 65 86 46 325

*/
