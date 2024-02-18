#include <iostream>
using namespace std;
int main()
{
  int t, n, x;
  cin >> t;
  while (t--)
  {
    cin >> n >> x;
    if (n <= 2)
      cout << "1" << endl;
    else
      n = n - 2;
    cout << ((n + x - 1) / x) + 1 << endl;
  }
  return 0;
}