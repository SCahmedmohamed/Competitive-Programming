    // By Ahmed Mohamed Ibrahim . Nov/23/2021 23:14
    #include <bits/stdc++.h>
    using namespace std;
    int n,w=0,c=0;
    int main(){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>w;
            c+=w;
        }
        w=0;	
        for(int i=1;i<=5;i++)
            if((c+i)%(n+1)!=1)
                w++;
        cout<<w;
    }
         
