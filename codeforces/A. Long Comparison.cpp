// By Ahmed Mohamed Ibrahim . Dec/01/2021 20:43
#include<bits/stdc++.h>
using namespace std;
int main()
 
{
int t;
cin>>t;
while(t--)
{
double x1 , p1;
cin>>x1>>p1;
double x2 , p2;
cin>>x2>>p2;
double r;
r = log10(x1/x2) + p1-p2;
if(r==0)
cout<<"="<<"\n";
else if(r>0)
    cout<<">"<<"\n";
else
    cout<<"<"<<"\n";
}
 
}
