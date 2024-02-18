#include <iostream>
using namespace std;
int main()
{
  int t, a, b, c, n, sum, m;
  cin >> t;
  while (t--)
  {
    cin >> a >> b >> c >> n;
    sum = a + b + c + n;
    m = max(a, max(b, c));
    if (sum % 3 == 0 && sum / 3 >= m)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}