// By Ahmed Mohamed Ibrahim . Oct/15/2021 22:23
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string x;
    cin >> s >> x;
    for(int i = 0; i < s.size(); i++)
        {
        if(s[i] == x[i]){ cout << 0; }
        if(s[i] != x[i]){cout << 1;}

    }
}
