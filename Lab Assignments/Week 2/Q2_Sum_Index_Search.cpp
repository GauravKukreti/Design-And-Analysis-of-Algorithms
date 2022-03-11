#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, trigo = 1;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    for (int i = 0; i < n - 2 && trigo; i++)
    {
      for (int j = i + 1; j < n - 1 && trigo; j++)
      {
        int sum = arr[i] + arr[j];
        for (int k = j + 1; k < n; k++)
        {
          if (sum == arr[k])
          {
            cout << i + 1 << ", " << j + 1 << ", " << k + 1 << endl;
            trigo = 0;
            break;
          }
          else if (sum < arr[k])
            break;
        }
      }
    }
    if (trigo)
      cout << "No sequence found.\n";
  }
  return 0;
}
