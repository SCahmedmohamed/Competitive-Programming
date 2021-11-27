// By Ahmed Mohamed Ibrahim . Oct/07/2021 15:01
#include <bits/stdc++.h>
using namespace std;
int main() {
        int n,a,b,c,ans=0;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a>>b>>c;
            if(a+b+c >=2){
                ans++;
            }
        }cout<<ans << endl;
        return 0;
}
