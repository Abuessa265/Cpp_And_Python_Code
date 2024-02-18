#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
vector<int> parseInts(string str)
{
   stringstream ss(str);
   vector<int> solve;
   char ch;
  int temp;
  while(ss >> temp)
 {
  solve.push_back(temp);
  ss >> ch;
}
  return solve;
}
int main()
{
  string str;
  cin >> str;
 vector<int> integers = parseInts(str);
  for(int i = 0; i < integers.size(); i++)
{
  cout << integers[i] << "\n";
}
return 0;
}