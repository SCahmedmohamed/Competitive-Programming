// By Ahmed Mohamed Ibrahim . Feb/13/2022 16:04
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
    int x , n , cnt = 0;
    cin >> x >> n;
    pair<int,int> a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n);
    for(int i = 0 ; i < n ; i++){
      if(x > a[i].first){
        x+= a[i].second;
        cnt++;
      }else{
        cout << "NO" << el;
        return 0;
    }
    }
    if(cnt == n){
        cout << "YES" << el;
    }

    return 0;
}
