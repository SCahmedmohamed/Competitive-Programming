// By Ahmed Mohamed Scorpion . Jul/27/2022 18:09
#include <iostream>
using namespace std;
int i;
string s;
main() {
cin>>s;
for(i=1;i<s.size();i++) if(s[i]>91){cout<<s; return 0;}
if(s[0]>91)s[0]-=32;
else s[0]+=32;
for(i=1;i<s.size();i++) s[i]+=32;
cout<<s;
}
