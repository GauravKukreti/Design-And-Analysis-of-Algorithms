#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key,index=-1;
        cin>>n;
        int arr[10000];
        for(int i=0;i<n;i++)
          cin>>arr[i];
          
        cin>>key;
        
        int low=0,high=n-1,count=0,trigo=-1;
        while(low<=high)
        {
            count++;
            int mid = low + (high-low)/2;
            if(arr[mid]==key)
            {
                trigo=mid;
                break;
            }
            
            if(key>arr[mid])
                low = mid+1;
            else
                high = mid-1;
        }
        if(trigo==-1)
          cout<<"Not Present "<<count<<endl;
        else
          cout<<"Present "<<count<<endl;
    }
    return 0;
}

/*

3
5
12 23 36 39 41
41
8
21 39 40 45 51 54 68 72
69
10
101 246 438 561 796 896 899 4644 7999 8545
7999

*/
