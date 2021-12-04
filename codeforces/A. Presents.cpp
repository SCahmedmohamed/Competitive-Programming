// By Ahmed Mohamed Ibrahim . Dec/04/2021 10:54
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define el endl
#define ft float
#define dl double
void SCO(int n){
    cin >> n;
    int a[105], b;
    for(int i = 1; i <= n; i++) {
        cin >> b;
        a[b] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    return;
}
int main(){
    int n;
    SCO(n);
return 0;
}
