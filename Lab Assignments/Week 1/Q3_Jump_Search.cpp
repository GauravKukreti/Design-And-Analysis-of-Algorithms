#include <bits/stdc++.h>
using namespace std;

int Search(int arr[], int key, int n)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)-1] < key)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < key)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == key)
        return prev;

    return -1;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,key;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    cin>>key;
    int res=Search(arr,key,n);
    if(res==-1)
      cout<<"Not Present "<<n<<endl;
    else
      cout<<"Present "<<res+1<<endl;

  }
  return 0;
}
