#include <iostream>
using namespace std;
int main()
{
  int t, cnt = 0;

  cin >> t;
  while (t--)
  {
    int w, h, n;
    long long x = 1;
    cin >> w >> h >> n;
    while (w % 2 == 0)
    {
      w /= 2;
      x *= 2;
    }
    while (h % 2 == 0)
    {
      h /= 2;
      x *= 2;
    }
    if (x < n)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}