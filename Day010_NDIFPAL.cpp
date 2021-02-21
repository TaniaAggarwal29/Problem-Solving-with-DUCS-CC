#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    //print n alphabets a onwards so that every single alphabet is a palindrome substring
	    if (n>0)
	    {
	        for(int i=0; i<n; i++)
	            cout<<char(97+(i%26));
	    }
	    cout<<"\n";
	}
	return 0;
}

