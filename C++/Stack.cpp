#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
  // last in first out(LIFO)
  stack<int> st;
  st.push(11);
  st.push(22);
  st.push(33);
  st.push(44);
  st.push(55);
  st.push(20);
  st.push(101);

  cout << "Top value is " << st.top() << endl;
  st.pop();
  cout << "After pop value is " << st.top() << endl;

  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;

  // another way

  // while (st.size() > 0)
  // {
  //   cout << st.top() << " ";
  //   st.pop();
  // }

  return 0;
}