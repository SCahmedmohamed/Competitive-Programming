// By Ahmed Mohamed Scorpion 
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define ft first
#define sd second
#define pb push_back
using namespace std;
void file(){
    freopen("equal.in", "r", stdin);
 //   freopen("output.txt", "w", stdout);
}
int t , x , y , z;
int main() {
    file();
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        if(x == y || y == z || x == z) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
 
