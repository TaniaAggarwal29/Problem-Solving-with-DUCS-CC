#include <bits/stdc++.h>
using namespace std;

unordered_map<long, long> a;

long int dollars(long int n)
{
    if (n<12)
    {
        a[n] = n;
        return n;
    }
    if (a[n]==0)
        a[n] = max(n, dollars(n/2) + dollars(n/3) + dollars(n/4));
    return a[n];
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long int n;
	while (cin>>n)
	{
	    cout<<dollars(n)<<"\n";
	}
	return 0;
}

