#include <iostream>
using namespace std;
int main()
{
  int n, x, police = 0, crime = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (x > 0)
      police = police + x;
    else
    {
      if (police < 1)
        crime++;
      else
        police--;
    }
  }
  cout << crime << endl;
}