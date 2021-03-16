// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int main()
{
   map<int, int> gquiz1;
    gquiz1.insert(pair<int, int>(1, 40)); 
    gquiz1.insert(pair<int, int>(2, 30)); 
    gquiz1.insert(pair<int, int>(3, 60)); 
    gquiz1.insert(pair<int, int>(4, 20)); 
    gquiz1.insert(pair<int, int>(5, 50)); 
    gquiz1.insert(pair<int, int>(6, 50)); 
    gquiz1.insert(pair<int, int>(7, 10));
    gquiz1.erase(5);
    map<string,int> a;
    a.insert(pair<string, int>("haha",40));
    a.insert(pair<string, int>("huhu",40516));
    map<int, int>::iterator itr;
        for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) { 
        cout << '\t' << itr->first 
            << '\t' << itr->second << '\n'; 
    }
   //{({})}

    //cout << a["sadafa"];

}  // } Driver Code Ends