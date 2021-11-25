        // By Ahmed Mohamed Ibarhim . Nov/11/2021 20:42
        #include <bits/stdc++.h>
        using namespace std;
        int main()
        {
    		int n,i,t,a[100005];
        	cin>>t;
        	while(t--)
            {
    			  cin>>n;
     
    			for(i=0;i<n;i++){
    			cin>>a[i];
    			}
    			sort(a,a+n);
    			if(n%2==1){
    			cout<<a[n/2]<<" ";
    			}
    			for(i=n/2-1;i>=0;i--){
                    cout<<a[i]<<" "<<a[n-i-1]<<" ";
    			}
    			cout<< endl;
        	}
        }
