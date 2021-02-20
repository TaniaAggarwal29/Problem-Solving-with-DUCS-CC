#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    
	    int a[n];
	    int sum = 0;
	    /*input array elements and calculate the sum*/
	    for (int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        sum += a[i];
	    }
	    
	    int valid = 0;
	    
	    /*for all the elements, check the condition
	      and increment 'valid' if condition is true*/
	    for(int i=0; i<n; i++)
	    {
	        if (a[i]+k > sum-a[i])
	            valid++;
	    }
	    cout<<valid<<"\n";
	}
	return 0;
}

