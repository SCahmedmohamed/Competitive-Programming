// By Ahmed Mohamed Ibrahim .Oct/17/2021 01:57
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double s[100];
    double sum =0.0, ans;

    for(int i =0; i < n;i++){
        cin >> s[i];
        sum = sum + s[i];
    }
    ans = sum / n;

    cout << setprecision(10) <<ans;
}
