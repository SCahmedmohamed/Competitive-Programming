   // By Ahmed Mohamed Ibrahim . Nov/19/2021 18:20
    #include<bits/stdc++.h>
    using namespace std;
    int m,n,t,a[100005],p[100005];
    int main(){
     cin>>t;
     while(t--){
      cin>>n;
      for(int i=1;i<=n;i++){
       cin>>a[i];
       p[a[i]]=i;
      }
      m=n+1;
      for(int i=n;i;i--){
       if(p[i]<m){
        for(int j=p[i];j<m;j++)cout<<a[j]<<' ';
        m=p[i];
       }
      }
      cout<<endl;
     }
     return 0;
    }
