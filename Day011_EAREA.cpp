#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int x[n], y[n];
	for (int i=0; i<n; i++)
	    cin>>x[i]>>y[i];
	    
	double rx[n], ry[n];
	// take mid-points as random points
	for (int i=0; i<n; i++)
	{
	    rx[i] = (x[i] + x[(i+1)%n])/2.0;
	    ry[i] = (y[i] + y[(i+1)%n])/2.0;
	}
	
	double area=0.0;
	
	for (int i=0; i<n; i++)
	{
	    area += (rx[i%n]*ry[(i+1)%n] - rx[(i+1)%n]*ry[i%n]);	// formula for area of convex polygon
	}
	cout<<fixed<<setprecision(10)<<abs(area)/2;
	return 0;
}

