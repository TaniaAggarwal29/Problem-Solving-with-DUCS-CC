#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    long int a[n];
	    for (int i=0; i<n; i++)
	        cin>>a[i];
	    
	    sort(a, a+n);
	    
	    int count=0;
	    for(int i=0; i<n-1; i++)
	    {
	        if (a[i] == a[i+1])
	            count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}

