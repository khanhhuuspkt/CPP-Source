// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    stack<char> a;
    if ((x.length()%2)==0) {
        //a.push(x[0]);
    for(int i = 0; i<x.length();i++) {
        switch (x[i]) {
            case '}':
                {
                x[i] = '{';
                break;
                }
            case ']':
                {
                x[i] = '[';
                break;
                }
            case ')':
                {
                x[i] = '(';
                break;
                }
        }
        if (!a.empty()) {if (a.top()==x[i]) {a.pop(); continue;}}
        a.push(x[i]);
        //cout << a.top();
        //if (i == 3) {break;}
    }
    if (a.empty()) {return true;} else {return false;}
    } else {return false;}
}
string parcorrect(string x)
{
    // Your code here
    stack<char> a;
    if ((x.length()%2)==0) {
        //a.push(x[0]);
    for(int i = 0; i<x.length();i++) {
        switch (x[i]) {
            case '}':
                {
                x[i] = '{';
                break;
                }
            case ']':
                {
                x[i] = '[';
                break;
                }
            case ')':
                {
                x[i] = '(';
                break;
                }
        }
        if (!a.empty()) {if (a.top()==x[i]) {a.pop(); continue;}}
        a.push(x[i]);
        //cout << a.top();
        //if (i == 3) {break;}
    }

}

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   //cin>>t;
   a = "([))";
    //cout << ispar(a);
}  // } Driver Code Ends