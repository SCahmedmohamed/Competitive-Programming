    // By Ahmed Mohamed Ibrahim . Oct/18/2021 21:40
    #include <iostream>
    #include<string>
    using namespace std;
     
    int main() {
        int x, answer = 0;
        cin >> x;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == s[i+1]){
                answer++;
            }
     
        }
        cout << answer;
     	return 0;
    }
