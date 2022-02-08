// By Ahmed Mohamed Ibrahim . 	Jan/30/2022 13:46
#include <bits/stdc++.h>
using namespace std;
#define ts int test_cases;cin >> test_cases;while(test_cases--)
#define ld long double
#define ll long long
#define el endl
#define ft float
#define _3m_Scorpion Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  z , x , c , v;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] >= a[i-1]) z++;
        else z = 1;
        x = max(x,z);
    }
    cout << x << el;
      return 0;
}
