    // By Ahmed Mohamed Ibrahim . Nov/11/2021 20:19
    #include<bits/stdc++.h>
    #include<iostream>
    using namespace std;
     
    int main(){
    	int n;
    	long long m,a,b;
    	cin >> n >> m;
    	vector<long long> v(n);
    	long long sum = 0;
     
    	for(int i=0;i<n;i++){
    		cin >> a >> b;
    		v[i] = b - a;
    		sum+=a;
    	}
    	sort(v.begin(), v.end());
    	int c=0;
    	for(auto f:v){
    		if (sum <=m)
    			break;
    		sum+=f;
    		c++;
    	}
    	if (sum > m)
    		c = -1;
     
    	cout << c << endl;
    	return 0;
    }
