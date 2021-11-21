 // By Ahmed Mohamed Ibrahim . Nov/19/2021 18:19

 #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	string s;
    	cin>>s;
    	int i, j;
    	stack <char> st;
    	for(i= 0; i< s.size(); i++){
    		if(st.empty()){
    			st.push(s[i]);
    		}
    		else if(st.top() == s[i]){
    			st.pop();
    		}
    		else{
    			st.push(s[i]);
    		}
    	}
    	if(st.empty()){
    		cout<<"YES";
    	}
    	else{
    		cout<<"NO";
    	}
    }
