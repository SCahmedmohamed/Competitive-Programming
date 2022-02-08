// By Ahmed Mohamed Ibrahim . Jan/30/2022 14:17
#include <bits/stdc++.h>
using namespace std;
#define ts int test_cases;cin >> test_cases;while(test_cases--)
#define ld long double
#define ll long long
#define el endl
#define ft float
#define _3m_Scorpion Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  z , x , v;
int main(){
    int a , b, c;
    cin >> a >> b >> c;
    int mx = max(max( ( a + b + c ) , ( a*( b + c ) ) ),max( ( a * b * c ) , ( ( a + b ) * c ) ));
    cout << mx << el;
      return 0;
}
