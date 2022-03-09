#include <bits/stdc++.h>
using namespace std;

int jump_search(int arr[],int n, int key)
{
  int m=sqrt(n);
  int i=0;
  while(arr[m]<=key && m<n)
  {
    i=m;
    m+=sqrt(n);
    if(m>n-1)
      m=n;
  }
  for(int k=i;k<m;k++)
  {
    if(arr[k]==key)
      return k;
  }
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
    int arr[1000];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cin>>key;
    int res=jump_search(arr,n,key);
    if(res==-1)
      cout<<"Not Found"<<endl;
    else
      cout<<"Found at position: "<<res+1<<endl;
  }
  return 0;
}
