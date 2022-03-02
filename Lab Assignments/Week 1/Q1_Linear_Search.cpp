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
        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                index=i+1;
                break;
            }
        }
        if(index==-1)
          cout<<"Not Present "<<n<<endl;
        else
          cout<<"Present "<<index<<endl;
    }
    return 0;
}
/*

3
8
34 35 65 31 25 89 64 30
89
5
977 354 244 546 355
244
6
23 64 13 67 43 56
63

*/
