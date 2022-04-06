// By Ahmed Mohamed Ibrahim . Feb/15/2022 19:09
#include <bits/stdc++.h>
using namespace std;
#define ts int test_cases;cin >> test_cases;while(test_cases--)
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    Scorpion
    string s;
    cin>>s;
    regex p("WUB");
    cout<<regex_replace(s,p," ");
    return 0;
}
