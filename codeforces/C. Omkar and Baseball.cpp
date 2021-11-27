// By Ahmed Mohamed Ibrahim . Oct/13/2021 21:49
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    int n ;
    cin >> n ;
 
    bool ok = true ;
    int ans = 0 ;
    for(int i = 1 ; i <= n; i++){
        int x ; 
        cin >> x ;
        if(x != i) ok = false ;
        else if(ok == false && x==i){
            ++ ans ;
            ok = true ;
        }
    }
    if(!ok) ans ++ ;
    cout << min(ans,2) << endl ;
}
 
int main(){
    ios_base::sync_with_stdio(false);
 
    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }
 
    return 0 ;
}
