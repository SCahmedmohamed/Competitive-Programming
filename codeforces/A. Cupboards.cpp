    // By Ahmed Mohamed Ibrahim . Oct/23/2021 19:52
    #include <bits/stdc++.h>
    using namespace std;
    int min(int a,int b){
        return a>b?b:a;
    }
    int main() {
        int n;
        cin>>n;
        int l[10001],r[10001];
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i];
        }
        int r0=0,r1=0,l0=0,l1=0;
        for(int i=0;i<n;i++){
            if(r[i]==1){
                r1++;
            }else{
                r0++;
            }
        }
        int red=min(r1,r0);
        for(int i=0;i<n;i++){
            if(l[i]==1){
                l1++;
            }else{
                l0++;
            }
        }
        red+=min(l1,l0);
        cout<<red;
    	return 0;
    }
