#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;	//test cases
	while(t--)
	{
	    long int n, k;
	    cin>>n>>k;
	    
	    long int A[n], B[n];
	    for(int i=0; i<n; i++)
	        cin>>A[i];	//array to store time taken for each stone
	        
	    for(int i=0; i<n; i++)
	        cin>>B[i];	//array for price that stone offers
	        
	    long int C[n];
	    long int max=0;
	    for (int i=0; i<n; i++)
	    {
	        C[i] = (k/A[i])*B[i];	//No. of stones that can be moved in given time * price of each stone
	        /*Find max of all the n values and print it.*/
	        if (C[i]>max)
	            max = C[i];
	    }
	    cout<<max<<"\n";
	    
	}
	return 0;
}
