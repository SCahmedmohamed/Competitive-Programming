    // By Ahmed Mohamed Ibrahim . Nov/07/2021 21:53
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int k,n,w,s; 
        cin >> k >> n >> w;
        s=(w*(w+1)*k)/2;
        if (n>s) cout<<0;
        else cout<<(s-n);
        return 0;
     
    }
