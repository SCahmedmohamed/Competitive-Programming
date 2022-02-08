// By Ahmed Mohamed Ibrahim . Feb/08/2022 01:55
#include <bits/stdc++.h>
using namespace std;
#define ts int test_cases;cin >> test_cases;while(test_cases--)
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int z;
int main(){
    Scorpion
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int q = a[i] % 7;
        if(q<=a[i]%10){
            a[i] -= q;
        }else{
            a[i] +=7-q;
        }
        cout << a[i] << el;
    }
    return 0;
}
