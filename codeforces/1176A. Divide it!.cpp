// By Ahmed Mohamed Scorpion . Jul/26/2022 18:56
#include<bits/stdc++.h>
using namespace std;
long long int q , n , i;
int main(){
	for(cin>>q;q--;){
		cin>>n;
		for(i=0;n>1&&i<200;i++)
			n%2==0?n/=2:n%3==0?n=2*n/3:n%5==0?n=4*n/5:0;
		cout<<(n>1?-1:i)<<endl;
	}
}
