#include <iostream>
using namespace std;

bool canRead(string word, int alphabets[]) {
    for (auto x : word) {
        if (alphabets[x-'a'] == 0)
            return false;
    }
    return true;
}

int main() {
	// your code goes here
	int alphabets[26] = {0};
	string s;
	cin>>s;
	for(auto x : s) {
	    alphabets[x-'a'] = 1;
	}
	
	int n;
	cin>>n;
	while (n--) {
	    string word;
	    cin>>word;
	    
	    if (canRead(word, alphabets))
	        cout<<"Yes\n";
	    else
	        cout<<"No\n";
	    
	}
	return 0;
}

