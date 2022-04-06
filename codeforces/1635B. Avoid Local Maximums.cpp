// By Ahmed Mohamed Ibrahim . Feb/21/2022 21:13
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		int a[200020]={0};
		int sum=0;
		cin>>n;
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		for (int i=2;i<=n-1;i++){
			if(a[i]>a[i-1]&&a[i]>a[i+1]){
				a[i+1]=max(a[i],a[i+2]);
				sum++;
			}
		}
		cout<<sum<<endl;
		for (int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}	
}
