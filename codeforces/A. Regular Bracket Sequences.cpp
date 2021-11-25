// By Ahmed Mohamed Ibrahim . Oct/25/2021 20:57
#include<bits/stdc++.h>
using namespace std;
int main () {
    int x;cin>>x;
    while(x--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            int q;
            q=i;
                while(q--)cout<<'(';q=i;
                while(q--)cout<<')';q=n-i;
                while(q--)cout<<"()";cout<<endl;
    }
}
return 0;
}
