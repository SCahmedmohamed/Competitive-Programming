// By Ahmed Mohamed Ibrahim . Feb/22/2022 20:39
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Scorpion
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        int r = s.find('r');
        int g = s.find('g');
        int b = s.find('b');
        int R = s.find('R');
        int G = s.find('G');
        int B = s.find('B');
        if(r < R && b < B && g < G){
            cout << "YES" << el;
        } else {
            cout << "NO" << el;
        }
    }
	return 0;
}
