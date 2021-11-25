// By Ahmed Mohamed Ibrahim . Nov/18/2021 20:52   
#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        int b = 0;
        for(int i = 1; i <n-1;){
            if(a[i-1] == 1 && a[i] == 0 && a[i+1] == 1){
                b++;
                i+=3;
            } else i++;
        }
        cout << b << endl;
    }
