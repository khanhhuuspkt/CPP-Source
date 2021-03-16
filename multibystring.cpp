// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// } Driver Code Ends


/*You are required to complete below function */
string plusString(string s3, string s4) {
    string s5 = "";
    int d;
    if (s3.length()>s4.length()) {
        for (int i = s4.length();i < s3.length(); i++) {
            s4 = '0'+s2;
        }
    } else if (s3.length()<s4.length()) {
        for (int i = s3.length();i < s4.length(); i++) {
            s3 = '0'+ s3;
        }
    }
    for (int i = s3.length()-1; i >=0;i--) {
        if (i == 0) {s5 = to_string((s3[i]-48)+(s4[i]-48)+d) + s5;continue;}
        s5 = to_string(((s3[i]-48)+(s4[i]-48) + d)%10) + s5;
        d = ((s3[i]-48)+(s4[i]-48)+d)/10;
    }
    return s5;
}
string mulString(string s1,string s2) {
    string s4="",s3 = "";
    int c =0;
    for (int i =s2.length()-1; i >= 0;i--) {
        s3 = "";
        c=0;
        for (int j =s1.length() - 1; j >= 0;j--) {
        if (j == 0) {s3 = to_string((s2[i]-48)*(s1[j]-48)+c) + s3;continue;}
        s3 = to_string(((s2[i]-48)*(s1[j]-48) + c)%10) + s3;
         //return s3;
        c = ((s2[i]-48)*(s1[j]-48)+c)/10;
        }
        for (int z = i ; z < s2.length() -1; z++) {
            s3 = s3 + '0';
        }
        s4 = plusString(s3,s4);
    }
    for (int i = s4.length()-1; i >= 0; i --) {
        if (s4[i]!='0') {return s4;}
    }
    return "0";
}

string multiplyStrings(string s1, string s2) {
    int x=1,y=1;
    if (s1[0]=='-') {s1.erase(s1.begin());x=-1;}
    if (s2[0]=='-') {s2.erase(s2.begin());y=-1;}
    string str = mulString(s1,s2);
   if (x*y>0) {return str;} else {return '-'+str;}
   
}
int main() {

    	string a;
    	string b;
    	//cin>>a>>b;
        a = "33";
        b = "0";
    	
    	cout<<multiplyStrings(a,b)<<endl;
     
}