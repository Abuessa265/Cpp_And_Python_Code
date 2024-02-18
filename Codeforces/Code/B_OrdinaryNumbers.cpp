#include <iostream>
using namespace std;
int main()
{
  int t, cnt = 0;

  cin >> t;
  while (t--)
  {
    int n, x, sum;
    cin >> n;
    if (n <= 9)
      cout << n << endl;
    else
    {
      x = n / 11;
      sum = x + 9;
      cout << sum << endl;
    }
  }
  return 0;
}