    // By Ahmed Mohamed Ibrahim . Nov/06/2021 16:04
    #include <bits/stdc++.h>
    using namespace std;
    int a[105],n,i=2;
    main() {
        while (cin >> a[n++]);
        sort(a, a + n);
        cout << a[1];
        for (; i < n; i++) {
            cout << '+' << a[i];
        }
    }
