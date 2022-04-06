#include <bits/stdc++.h>
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

void check(int arr[],int n,int key)
{
    int l=0,r=n-1;
    while(l<r)
    {
        int sum=arr[l]+arr[r];
        if(sum>key)
        {
            r-=1;
        }
        else if(sum<key)
        {
            l-=1;
        }
        else
        {
            cout<<arr[l]<<" "<<arr[r]<<endl;
            return;
        }
    }
    cout<<"No Such Elements Exists.\n";
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
        int key;
        cin>>key;
        mergeSort(arr, 0, n-1);
        check(arr,n,key);
    }
    return 0;
}
/*

2
10
64 28 97 40 12 72 84 24 38 10
50
15
56 10 72 91 29 3 41 45 61 20 11 39 9 12 94
302

*/
