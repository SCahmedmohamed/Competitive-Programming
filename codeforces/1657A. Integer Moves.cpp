// By Ahmed Mohamed Ibrahim . Mar/22/2022 18:24
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5;
int main(){
    Scorpion
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x , y;
        cin >> x >> y;
        double f = sqrt(pow(0 - x,2) + pow(0 - y,2));
        if(x == 0 && y == 0){
            cout << 0 << el;
        } else if(f == (int)f){
        cout << 1 << el;
        }else cout << 2 << el;
    }
    return 0;
}
