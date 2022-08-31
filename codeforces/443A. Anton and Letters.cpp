// By Ahmed Mohamed Scorpion
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
string s , cm;
bool vis[N];
int main(){
    Scorpion
    getline(cin,s);
    for(int i = 0 ;i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(!vis[s[i]]){
                cm.push_back(s[i]);
                vis[s[i]] = true;
            }
        }
    }
    cout << cm.size() << el;
    return 0;
}
