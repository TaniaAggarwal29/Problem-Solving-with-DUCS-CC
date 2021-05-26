#include <iostream>
using namespace std;

string Erasable(int n, string s) {
    int count[26] = {0};
	    
    for (int i=0; i<n; i++) {
        count[s[i]-'a']++;
    }
    
    for(int i=0; i<26; i++) {
        if ( count[i]!=0 && count[i]%2!=0)
            return "NO";
    }
    return "YES";
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while (t--) {
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    cout<<Erasable(n, s)<<"\n";
	    
	}
	return 0;
}
