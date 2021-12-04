// By Ahmed Mohamed Ibrahim . Dec/04/2021 12:27	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define el endl
#define ft float
#define dl double
void SCO(int n){
    cin >> n;
    int a[n], res = 0;
    for(int i = 0; i < n; i++) {
       cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if(a[i] != a[i-1]) res++;
    }
    cout << res << el;


    return;
}
int main(){
    int n;
    SCO(n);
return 0;
}
