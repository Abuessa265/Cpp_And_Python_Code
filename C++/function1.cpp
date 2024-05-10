#include <bits/stdc++.h>
#include <iostream> 
using namespace std;

void discount(int main,int dic){
    float afterDisc=static_cast<float>(main-(main*(dic/100)));
    cout<<afterDisc;
}
     
int main() {
   
   int m,dic;
   cin>>m>>dic;
    discount( m, dic);

    return 0;
}