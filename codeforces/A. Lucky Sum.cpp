    // By Ahmed Mohamed Ibrahim . Nov/08/2021 19:06 	
    #include<bits/stdc++.h>
    using namespace std;
     
    long long l, r, ans;
    set<long long> s;
     
    void f(long long x)
    {
    	s.insert(x);
    	if(x<r)
    	{
    		f(x*10 + 4);
    		f(x*10 + 7);
    	}
    }
     
    int main()
    {
    	cin>>l>>r;
    	for(f(0); l<=r;)
    	{
    		auto it = s.lower_bound(l);
    		long long val = *it;
    		ans += (min(r, val)-l+1)*val;
    		l = val + 1;
    	}
    	cout<<ans;
    }
