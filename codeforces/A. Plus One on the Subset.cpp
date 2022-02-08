// By Ahmed Mohamed Ibrahim . Jan/29/2022 17:15
#include<bits/stdc++.h>
#define ll long long
#define test_cases int test;cin >> test;for(int i=0;i<test;i++)
#define el endl
#define ft float
#define ld long double
#define _3m_Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
 
            _3m_Scorpion
    test_cases{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    cout << a[n-1] - a[0] << el;
    }
 
return 0;
}
