// By Ahmed Mohamed Ibrahim . Dec/16/2021 19:09
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    Scorpion
    int tt;
    cin>>tt;
    while(tt--){
        string s, t;
        cin>>s>>t;
        int a[26]={0};
        for(char c: s)
            a[c-'a']++;
        string ans="";
        if(t=="abc"&&a[0]&&a[1]&&a[2]){
 
            while(a[0]--){
                ans+="a";
            }
            while(a[2]--)
                ans+="c";
            while(a[1]--)
                ans+="b";
            for(int i=3;i<26;i++){
                char c='a';
                c+=i;
                while(a[i]--)
                    ans+=c;
            }
        }
        else{
            for(int i=0;i<26;i++){
                char c='a';
                c+=i;
                while(a[i]--)
                    ans+=c;
 
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}
