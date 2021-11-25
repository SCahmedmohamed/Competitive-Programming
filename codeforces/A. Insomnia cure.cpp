    // By Ahmed Mohamed Ibrahim . Oct/23/2021 19:28
    #include <bits/stdc++.h>
    using namespace std;
    int a,b,c,d,n,i,s;
    int main(){
        cin>>a>>b>>c>>d>>n;
        for(i=1;i<=n;i++)
            if(i%a && i%b && i%c && i%d)
                s++;
            cout<<n-s;
            }
