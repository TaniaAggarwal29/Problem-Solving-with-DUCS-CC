#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string n;
	    cin>>n;
	    int c=0;
	    /*If number contains any digit not equal to 4 or 7, it is not lucky number.
		  Replace it to make the number lucky
		  That would count as 1 operation, therefore increment the count*/
	    for (char x: n)
	    {
	        if(x != '4' && x!='7')
	            c++;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}

