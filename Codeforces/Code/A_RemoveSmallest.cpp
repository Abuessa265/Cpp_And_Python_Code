#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, a[101];
  cin >> t;
  while (t--)
  {
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    int cnt = 0;
    for (int i = 1; i < n; i++)
      if (a[i] - a[i - 1] > 1)
        cnt++;
    if (cnt < 1)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}