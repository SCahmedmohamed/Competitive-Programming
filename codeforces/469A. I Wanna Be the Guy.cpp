// By Ahmed Mohamed Scorpion . Jul/27/2022 17:39
#include<bits/stdc++.h>
using namespace std;
int main() 
{
   int n,p,q,x;
   set<int> a;
   cin>>n>>p;
   while(p--){
     cin>>x;
     a.insert(x);
   }
   cin>>q;
  while(q--){
    cin>>x; 
    a.insert(x);
  }
   if(n==a.size())cout<<"I become the guy.";
   else cout<<"Oh, my keyboard!";
   
}
