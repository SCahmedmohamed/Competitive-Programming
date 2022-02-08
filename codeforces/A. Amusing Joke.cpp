// By Ahmed Mohamed Ibrahim . Feb/02/2022 14:37
#include <bits/stdc++.h>
#define el endl
#define ll long long
using namespace std;

int main()
{
    string a , b , c;
    cin >> a >> b >> c;
    a = a + b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a == c)
    {
        cout << "YES" << el;
    }else {
        cout << "NO" << el;
    }

    return 0;

}
