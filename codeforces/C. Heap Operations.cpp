    // By Ahmed Mohamed Ibrahrim . Oct/27/2021 19:03
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int n;
    	cin >> n;
    	priority_queue<int, vector<int>, greater<int>> pq;
    	vector<string> v;
    	while (n--)
    	{
    		string s;
    		cin >> s;
    		if (s[0] == 'i') {
    			int x;
    			cin >> x;
    			pq.push(x);
    			v.emplace_back(s + " " + to_string(x));
    		}
    		else if (s[0] == 'r') {
    			if (pq.empty()) {
    				v.emplace_back("insert 20");
    			}
    			else pq.pop();
    			v.emplace_back(s);
    		}
    		else {
    			int x;
    			cin >> x;
    				while (pq.size() && pq.top() < x) {
    					v.emplace_back("removeMin");
    					pq.pop();
    					
    				}
    				if (pq.empty() || pq.top() > x) {
    					v.emplace_back("insert " + to_string(x));
    					pq.push(x);
    				}
    				v.emplace_back(s + " " + to_string(x));
    			}
    	}
    	cout << v.size() << '\n';
    	for (auto &i : v)
    		cout << i << '\n';
    	return 0;
    }
