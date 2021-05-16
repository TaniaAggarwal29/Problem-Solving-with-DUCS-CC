#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];

        int ans= 0;
        for (int i=0; i<n; i++)
        {
            ans ^= (a[i] + a[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}

