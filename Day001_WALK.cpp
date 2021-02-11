#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;	// no. of test cases
	while(t--)
	{
	    int n;
	    cin>>n;	//no. of segments
	    int w[n];
	    for (int i=0; i<n; i++)
	        cin>>w[i];	//actractivesness of shops
	        
	    /*Minimum required velocity is maximum of 
		(atrractiveness of segment + segments before current segment)*/
	    int max=w[0];
	    for (int i=1; i<n; i++)
	    {
	        if (w[i]+i > max)
	            max=w[i]+i;
	    }
	    cout<<max<<"\n";
	}
	return 0;
}
