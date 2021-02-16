#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;	//test cases
	
	while(t--)
	{
	    int n;
	    cin>>n;	//no. of cars
	    int profit[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>profit[i];
	    }
	    
	    sort(profit, profit+n, greater<int>());	//sorting the array in decreasing order
	    
	    /*
		each year decreases profit by 1, therefore add profit[i]-i to profit earned.
		Take modulo as given in question.
		*/
	    int profit_earned=0;
	    for(int i=0; i<n; i++)
	    {
	        if ((profit[i]-i)>0)
	        {
	            profit_earned += (profit[i]-i);
	            profit_earned %= 1000000007;
	        }
	    }
	    cout<<profit_earned<<"\n";
	}
	return 0;
}

