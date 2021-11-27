// By Ahmed Mohamed Ibrahim . Oct/07/2021 14:52
#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
