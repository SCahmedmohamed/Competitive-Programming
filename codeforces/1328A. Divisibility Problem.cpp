// By Ahmed Mohamed Ibrahim . Aug/30/2022 01:30
#include <bits/stdc++.h>
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 1e5 +5 , mod = 1e9 + 7;
void file(){
    freopen("input.in","r",stdin);
    freopen("output.in","w",stdout);
}
void flip(int &a , int &b){
    int bb = b;
    b = a;
    a = bb;
}
int t , a , b;

int main(){
    Scorpion
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a%b == 0){
            cout << 0 << endl;
            continue;
        }
        int x = (a / b) + 1 , y = x * b;
        cout << y - a << endl;
    }
    return 0;
}
