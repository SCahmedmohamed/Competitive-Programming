// By Ahmed Mohamed Ibrahim . Sep/22/2021 00:40
#include <bits/stdc++.h>
 
#define long long long
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define LONG_MAX_VALUE 0x7fffffffffffffffL
#define LONG_MIN_VALUE 0x8000000000000000L
 
using namespace std;
 
struct Solution
{
    void run()
    {
        int n;
        cin >> n;
        long a[n];
 
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0)
        {
            cout << -1 << endl;
            return;
        }
 
        long target = sum / n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > target)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
};
 
int main()
{
    ios_base::sync_with_stdio(false);
 
    Solution solution = Solution();
 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solution.run() ;
    }
    return 0;
}
