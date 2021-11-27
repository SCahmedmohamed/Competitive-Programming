// By Ahmed Mohamed Ibrahim . Oct/13/2021 21:50
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin >> t;
	while(t--)
    {
        vector<int> a,b;
        int n,k, x, sum = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            b.push_back(x);
        }
 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
 
        for(int i = 0; i < k; i++)
        {
            if(a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
        }
 
        for(int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
}
