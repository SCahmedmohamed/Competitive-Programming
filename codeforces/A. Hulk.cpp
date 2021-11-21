// By Ahmed Mohamed Ibrahim . Nov/19/2021 15:37
 #include <bits/stdc++.h>
    using namespace std;
    void hulk(int n){
        cin >> n;
        for(int i = 1; i <= n; i++){
        if(i < n){
             if(i % 2 == 0){
                cout << " I love that ";
                } else {
                cout << "I hate that";
                }
        } else   if(i % 2 == 0){
            cout << " I love it ";
        } else {
            cout << "I hate it";
        }
    }
        return;
    }
    int main()
    {
        int n;
        hulk(n);
 
    }
