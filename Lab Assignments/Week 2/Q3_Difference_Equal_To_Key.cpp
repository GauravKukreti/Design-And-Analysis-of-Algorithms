#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, key, count = 0;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cin >> key;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == j)
          continue;

        if (arr[i] + key == arr[j])
        {
          count++;
          break;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}
