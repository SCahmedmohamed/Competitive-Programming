// By Ahmed Mohamed Ibrahim . Feb/21/2022 21:11
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int a,n,sum=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			sum=sum|a;
		}
		cout<<sum<<endl;
	}
}
