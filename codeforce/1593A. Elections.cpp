// By Ahmed Mohamed Ibrahim . Feb/25/2022 17:58
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Scorpion
    int n , a , b, c;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a >> b >> c;
        cout<<max(max(b,c)-a+1,0)<<" "<<max(max(a,c)-b+1,0)<<" "<<max(max(a,b)-c+1,0)<<endl;
    }
    return 0;
}
