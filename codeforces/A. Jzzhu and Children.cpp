// By Ahmed Mohamed Ibrahim . Feb/08/2022 02:17
#include<iostream>
using namespace std;
int i,n,a,ans,mx,m;
main(){
  cin>>n>>m ;
  for(i=0;i<n;i++){
    cin>>a;
    if((a-1)/m>=mx){
      mx=(a-1)/m ;
      ans=i ;
    }
  }
  cout<<ans+1;
  return 0;
}
