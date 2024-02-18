#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
   string a, b;
   char arr[] = {'a', 'b', 'c', 'd', '\0'};
   cout << arr << endl;
   char name[100], cname[100];
   gets(name);
   cout << "your name is : " << name << endl;
   int len = strlen(name);
   cout << len << endl;

   strcpy(cname, name);
   cout << "Copy name is : " << cname << endl;

   strcat(name, cname);
   cout << name << endl;

   strupr(name);
   cout << name << endl;

   strlwr(name);
   cout << name;

   // cin>>a>>b;
   // cout<<a<<" "<<b<<endl;
   // cout<<a.length()<<endl<<b.length()<<endl;
   // swap(a,b);
   // cout<<a<<" "<<b<<endl;
}
