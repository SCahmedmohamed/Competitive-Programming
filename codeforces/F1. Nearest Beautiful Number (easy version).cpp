    // By Ahmed Mohamed Ibrahim . Nov/06/2021 21:23
    #include <iostream>
    using namespace std;
    int f(int x)
    {
    	int ans=0;
    	while(x)
    	{
    		ans|=(1<<(x%10));
    		x/=10;
    	}
    	return __builtin_popcount(ans);
    }
     
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n,k;
    		cin>>n>>k;
    		while(f(n)>k)
    		{
    			int l=1,r=n;
    			while(f(r)>k) l*=10,r/=10;
    			l/=10;
    			n=((n/l)+1)*l;
    		}
    		cout<<n<<endl;
    	}
    }
