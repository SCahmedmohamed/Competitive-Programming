// By Ahmed Mohamed Ibrahim . Dec/04/2021 12:48
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
    for(int i = 0; i < n; i++){
        if(a[i] == 1) res++;
    }
    if(res > 0) cout << "HARD" << el;
    else cout << "EASY" << el;


    return;
}
int main(){
    int n;
    SCO(n);
return 0;
}
