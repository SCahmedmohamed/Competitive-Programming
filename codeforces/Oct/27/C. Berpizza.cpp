    // By Ahmed Mohamed Ibrahim . Oct/27/2021 18:56 
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
      int q;
      cin>>q;
      priority_queue<pair<int,int>>pq;
      int idx=0,id=0;
      vector<bool>vis(500005,false);
      while(q--){
        int a;
        cin>>a;
        if(a==1){
          int b;
          cin>>b;
          pq.push({b,-id});
          id++;
      }
      else{
        if(a==2){
          while(vis[idx]!=false){
          idx++;
          }
          vis[idx]=true;
          cout<<idx+1<<" ";
       }
       else{
          while(vis[-pq.top().second]!=false) pq.pop();
          vis[-pq.top().second]=true;
          int temp=-pq.top().second;
          cout<<temp+1<<" ";
        }
      }
      }
    }
