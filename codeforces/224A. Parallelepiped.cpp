// By Ahmed Mohamed Ibrahim .	Feb/08/2022 18:48
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
    int a , b , c;
    cin >> a >> b >> c;
    cout << 4 * ( sqrt( a * b / c ) + sqrt( a * c / b ) + sqrt( c * b / a ) ) << el;
return 0;
}
