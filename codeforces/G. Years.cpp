    // By Ahmed Mohamed Ibrahim . Oct/27/2021 18:19 	
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int n;
    	cin>>n;
    	map<int,int> a;
    	int n1,n2;
    	while(n--){
    		cin>>n1>>n2;
    		a[n1]++;
    		a[n2]--;
    	}
    	int my=0,cur=0,mp=0;
    	for(auto it:a){
    		cur+=it.second;
    		if(cur>mp){mp=cur;my=it.first;}
    	}
    	cout<<my<<' '<<mp;
    }
