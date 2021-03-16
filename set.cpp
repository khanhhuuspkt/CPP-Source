#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
    // empty set container 
    set<string> s1; 
  
    // insert elements in random order 
    s1.insert("aasd"); 
    s1.insert("asd"); 
    s1.insert("zhhg"); 
    s1.insert("xyz"); 
    s1.insert("klm"); 
      
    // only one 10 will be added to the set 
    s1.insert("obj");  
    s1.insert("klm"); 
  
    // printing set s1 
    set<string>::iterator itr; 
    cout << "\nThe set s1 is : \n"; 
    for (itr = s1.begin(); itr != s1.end(); itr++)  
    { 
        cout << *itr<<" "; 
    } 
    cout << endl;
} 