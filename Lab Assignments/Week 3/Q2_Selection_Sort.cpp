#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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
        
        int comp=0,swap=0;
        comp=(n*(n-1))/2;
        
        int j, min_idx;
        for (int i = 0; i < n-1; i++) 
        { 
            min_idx = i; 
            for (j = i+1; j < n; j++) 
            {
                if (arr[j] < arr[min_idx]) 
                  min_idx = j; 
            }
            
            swap++;
            int temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
            
        } 
        
        printArray(arr, n);
        cout<<"Comparisions = "<<comp<<endl<<"Swaps = "<<swap<<endl;
    }
    return 0;
}
/*

3
8
-23 65 -31 76 46 89 45 32
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325

*/
