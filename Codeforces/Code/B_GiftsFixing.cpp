#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m_a = INT_MAX, m_b = INT_MAX;
    long long cnt = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      m_a = min(m_a, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      m_b = min(m_b, b[i]);
    }
    for (int i = 0; i < n; i++)
    {
      cnt += max(a[i] - m_a, b[i] - m_b);
    }
    cout << cnt << endl;
  }
}