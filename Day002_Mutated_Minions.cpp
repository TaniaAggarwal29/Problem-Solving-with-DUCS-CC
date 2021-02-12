#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;     //test cases
	
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    int count = 0;
	    
	    /*Take n times c, add k to it and divide by 7.
		If it's completely divisible, increment count*/
	    
	    for (int i=0; i<n; i++)
	    {
	        int c;
	        cin>>c;
	        if((c+k)%7 == 0)
	            count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}

