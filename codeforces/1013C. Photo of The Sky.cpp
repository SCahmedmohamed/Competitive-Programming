// By Ahmed Mohamed Scorpion . Jul/17/2022 01:24
#include <bits/stdc++.h>
using namespace std;
long long a[1000000],n,ans;

int main(){
    cin>>n;
    for (int i=0;i<n*2;i++) cin>>a[i];
    sort(a,a+n*2);
    ans=(a[n-1]-a[0])*(a[n*2-1]-a[n]);
    for (int i=1;i<n;i++) ans=min(ans,(a[n*2-1]-a[0])*(a[i+n-1]-a[i]));
    cout<<ans;
}
