// { Driver Code Starts
// luon co 2 canh remove, 1 la tao cai moi 2 la xoa cai cu;
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.+
        string s;
        for (int i = 0; i < str.length() ;i++) {
            if (str[i]=='b') {continue;}
            if (str[i] == 'a' && str[i+1] == 'c') {i = i + 1;continue;}
            s = s + str[i];
        }
        return s;
    } 
};

// { Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}  // } Driver Code Ends