// By Ahmed Mohamed Ibrahim . Mar/22/2022 18:41
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5;

int main(){
    Scorpion
    int t;
    cin >> t;
    while (t--)
    {
        int n, B, x, y;
        cin >> n >> B >> x >> y;
        long long sum = 0;
        int a[n];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] + x <= B)
            {
                a[i] = a[i - 1] + x;
            }
            else
            {
                a[i] = a[i - 1] - y;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            sum += a[i];
        }
        cout << sum << el;
    }
    return 0;
}
