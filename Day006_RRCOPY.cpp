#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
		//remove duplicates by creating a set
	    set<int> s;
	    int n;
	    cin>>n;
	    
	    for (int i=0; i<n; i++)
	    {
	        int x;
	        cin>>x;
	        s.insert(x);
	    }
	    cout<<s.size()<<"\n";
	}
	return 0;
}

