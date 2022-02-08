// By Ahmed Mohamed Ibrahim . Feb/08/2022 15:44
#include<bits/stdc++.h>
#define ll long long
#define test_cases int test;cin >> test;while(test--)
#define el endl
#define ft float
#define ld long double
#define _3m_Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){

            _3m_Scorpion
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    sort(s,s+n);
    cout << s[n/2] << el;
return 0;
}
