// By Ahmed Mohamed Ibrahim . Sep/22/2021 00:26
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x(0);
    cin >> n;

    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}
