// By Ahmed Mohamed Ibrahim . Jan/29/2022 17:22
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
        int a , b , c;
        cin >> a >> b >> c;
        if((a+c)%(2*b)==0&&a+c>0||((2*b-c)%a==0&&2*b-c>0)||((2*b-a)%c==0&&2*b-a>0)){
            cout << "YES" << el;
        } else cout << "NO" << el;
    }
return 0;
}
