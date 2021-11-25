    // By Ahmed Mohamed Ibrahim . Oct/18/2021 22:11
    #include <bits/stdc++.h>
    #include<string>
    using namespace std;
     
    int main() {
        int n,m;
        cin >> n >> m;
        while(true)
        {
            bool prime = true;
            n++;
            for(int i = 2; i < n; i++)
            {
                if(n % i == 0)
                    prime = false;
            }
            if(prime == true)
                break;
        }
        if(n == m)
            cout << "YES";
        else
            cout << "NO";
     	return 0;
    }
