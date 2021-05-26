#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int c[n];
	for(int i=0; i<n; i++)
	    cin>>c[i];
	    
	int min_1=100001, min_2=100001, min_3=100001;
	int t;
	
	for(int i=0; i<n; i++) {
	    cin>>t;
	    if (t==1 && c[i]<min_1)
	        min_1 = c[i];
	    else if (t==2 && c[i]<min_2)
	        min_2 = c[i];
	    else if (t==3 && c[i]<min_3)
	        min_3 = c[i];
	}
	
	int m = min(min_1+min_2, min_3);
	cout<<m<<"\n";
	
	return 0;
}

