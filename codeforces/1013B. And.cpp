// By Ahmed Mohamed Scorpion . Jul/17/2022 01:17
#include<bits/stdc++.h>
using namespace std;
int n,h,k,ansn=3,f[100010],g[100010];
int main(){
	cin>>n>>h;
	for (int i=1;i<=n;i++){cin>>k;f[k]++;if (k!=(k&h))g[k&h]++;}
	for (int i=0;i<=100000;i++){
		if (f[i]>=2){ansn=min(ansn,0);}
		if (f[i]>=1&&g[i]>=1) ansn=min(ansn,1);
		if (g[i]>=2) ansn=min(ansn,2);
	}
	if (ansn==3) cout<<"-1"<<endl;else cout<<ansn<<endl;
	return 0;
}
