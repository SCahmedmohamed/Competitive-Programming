// By Ahmed Mohamed Scorpion . Jul/15/2022 16:33
#include<iostream>
using namespace std;
int n, m, a, b;
int main()
{
    cin>>n>>m>>a>>b;
    cout<<min(n*a, n/m*b+min(n%m*a,b));
}
