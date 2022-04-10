// By Ahmed Mohamed Ibrahim . Apr/09/2022 23:47
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5;
int dx[] ={1,1,1,-1,-1,-1,0,0};
int dy[] ={0,1,-1,0,1,-1,1,-1};
int srcx , srcy , disx , disy , n;
map<pair<int,int>,int> d;
map<pair<int,int>,bool> valid;

int main(){
    Scorpion
    cin >> srcx >> srcy >> disx >> disy >> n;
    for(int i = 0 ; i < n; i++){
        int row , l , r;
        cin >> row >> l >> r;
        for(int j = l; j <= r; j++){
             valid[{row,j}] = true;
        }
    }
    queue<pair<int,int>> q;
    q.push({srcx , srcy});
    d[{srcx,srcy}] = 0;
    while(!q.empty()){
        int curx = q.front().ff;
        int cury = q.front().ss;
        q.pop();

        if(curx == disx && cury == disy){
        cout << d[{curx, cury}];
        return 0;
    }
    for(int i = 0; i < 8; i++){
        int nx = curx + dx[i];
        int ny = cury + dy[i];
        if( !d.count({nx,ny}) && valid[{nx,ny}]){
            d[{nx,ny}] = d[{curx,cury}] +1;
            q.push({nx,ny});
        }
        }
    }
    cout << -1;
    return 0;
}
