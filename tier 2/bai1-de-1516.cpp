#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   string a,b;
   getline(cin , a);
   getline(cin , b);
   
   int cnt = 0;
   
   int s1 = a.size();
   int s2 = b.size();
   for(int i = 0 ; i < b.length(); i ++){
      if(b.substr(i,s1) == a){
         cnt++;
      }
   }
   cout<<cnt<<"\n";
   return 0 ;
}