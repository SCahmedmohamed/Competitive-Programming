        // By Ahmed Mohamed Ibarhim . Nov/19/2021 15:00
        #include <bits/stdc++.h>
        using namespace std;
        int the_empty_room(int n){
            int x , y, res = 0;
            cin >> n;
            for(int i =0; i<n; i++){
                cin >> x >> y;
                if(y - x >= 2){
                    res++;
                } else continue;
            }
            return res;
        }
        int main()
        {
        	int n, sum;
        	sum = the_empty_room(n);
        	cout << sum;
        }
