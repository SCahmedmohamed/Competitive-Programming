    // By Ahmed Mohamed Ibrahim . Nov/11/2021 21:49
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int n;
    	cin>>n;
    	int a,b,c=1;
    	for(int i = 0; i < n; i++){
    		cin>>a>>b;
    		if(a!=b)
    		c=0;
    	}
    	if(c)
    	cout<<"Poor Alex"<<endl;
    	else
    	cout<<"Happy Alex"<<endl;
    }
