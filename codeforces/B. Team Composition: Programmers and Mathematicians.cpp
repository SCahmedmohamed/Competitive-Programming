    // Solved In Live Contest 
    // By Ahmed Mohamed Ibrahim .  	Nov/25/2021 19:12
    #include<bits/stdc++.h>
    using namespace std;
    void Solve_1611_B(int n){
        cin >> n;
        int a , b,c, ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            cout << min((a+b)/4,min(a,b)) << endl;
            }
        return;
    }
    int main () {
        int n;
        Solve_1611_B(n);
     
    }
