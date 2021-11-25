// By Ahmed Mohamed Ibrahim . Nov/15/2021 20:18    
#include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long 
     
    int32_t main() {
    	ll n;
    	cin >> n;
    	int a[n];
    	for (int i = 0; i < n; i++)
    		cin >> a[i];
    	sort(a, a + n);
    	ll s = 0;
    	ll ans = 0;
    	for (int i = 0; i < n; i++) {
    		if (a[i] >= s) {
    			ans ++;
    			s = s + a[i];
    		}
    	}
    	cout << ans;
    }
