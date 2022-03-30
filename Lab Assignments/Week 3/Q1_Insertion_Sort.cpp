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
        
        int comp=0,shift=0;
        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
                comp++;
                shift++;
            }
            arr[j + 1] = key;
            shift++;
        }
        
        printArray(arr, n);
        cout<<"Comparisions = "<<comp<<endl<<"Shifts = "<<shift<<endl;
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
