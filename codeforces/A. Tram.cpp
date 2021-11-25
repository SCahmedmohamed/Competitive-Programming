    // By Ahmed Mohamed Ibrahim . Oct/22/2021 15:37
    #include <bits/stdc++.h>
    using namespace std;
    main(){
    	int c=0,i,j,n,m=0;
    	for(cin>>n;n--;)
    	{
    		cin>>i>>j;
    		if(m<(c+=-i+j))
    		m=c;
    	}
    	cout<<m<<endl;;
    }
