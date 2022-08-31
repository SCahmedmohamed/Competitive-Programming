// By Ahmed Mohamed Scorpion . Jul/17/2022 01:16
#include<bits/stdc++.h>
using namespace std;
int n,a,s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cin>>a,s+=a;
	}
	for(int i=1;i<=n;i++){
	    cin>>a,s-=a;}
	if(s<0)
	cout<<"No";
	else 
	cout<<"Yes";
}
