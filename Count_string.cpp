#include <bits/stdc++.h>
using namespace std;

/*Test Case 1: N = 1
Possible strings are: "a", "b" and "c"

Test Case 2: N = 3
Number of strings with 3 occurrances of a: 1
2-a and 1-b: 3
2-a and 1-c: 3
1-a, 1-b and 1-c: 6
1-a and 2-c: 3
1-b and 2-c: 3
Hence, total number of strings of length 3 = 1 + 3 + 3 + 6 + 3 + 3 = 19*/

int main() {
	//code
	int T,N,out,t;
	cin >> T;
	
	while(T--) {
	    cin >> N;
	    //cout <<N <<"\n";
	    out = 1+ N*(N-1) + 2*N + (N*(N-1))/2 + (N*(N-1)*(N-2))/2;
	    cout << out << "\n";
	}
	return 0;
}