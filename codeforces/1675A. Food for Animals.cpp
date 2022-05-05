// Ahmed Mohamed Ibrahim . Solved In Live Contest Div.3 
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int t , a , b , c, x , y;
int main(){
    Scorpion
    cin >> t;
    while(t--){
        bool dog = false, cat = false;
        cin >> a >> b >> c >> x >> y;

        if(x <= a) dog = true;
        else if(x <= a+c){
            dog = true;
            c = c - (x - a);
        }
        else dog = false;

        if(y <= b) cat = true;
        else if(y <= b+c){
            cat = true;
            c = c - (y - b);
        }
        else cat = false;

        if(dog && cat) cout << "YES" << el;
        else cout << "NO" << el;
    }

    return 0;
}
