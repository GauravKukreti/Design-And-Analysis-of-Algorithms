#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, key;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cin >> key;
    int i = 0, count = 0;
    while (arr[i] != key && i < n)
      i++;

    while (arr[i] == key && i < n)
    {
      count++;
      i++;
    }

    cout << key << "- " << count << endl;
  }
  return 0;
}
