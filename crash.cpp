// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>

#define MY_NAME "Steve"
#define MAX 365*24*60*60
#define c cout
typedef int i; 

using namespace std;

string swap(int i,int j, string TMP){
    char tmp;
    tmp = TMP[i];
    TMP[i] = TMP[j];
    TMP[j]=tmp;
    return TMP;
}
int main() {
	string A,B,TMP;
	int out,t;

	    out = 0;
	    A = "love";
        B = "vole";
	    for (int i =0; i < A.length() - 1;i++){
	        if (out ==1) {break;}
	        for (int j = i +1; j < A.length(); j++){
	           TMP = A;
	           TMP = swap(i,j,TMP);
               cout << TMP << " $$$\n";
	           if (TMP == B) {out =1; break;}
	        }
	    }
	    cout << out << "\n";

	}


