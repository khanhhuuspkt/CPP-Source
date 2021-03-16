#include <bits/stdc++.h>
using namespace std;

void func(string str){
    int c = 0;
    bool flag = 1;
    string s;
    vector<string> a;
    str = str ;
    for (int i=0;i<str.length();i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            flag =0;
            s =s + str[i];
        } else if (flag == 0 ){
        a.push_back(s);
        s="";
        flag =1;
        }
        if (i == str.length()-1) {a.push_back(s);}
    }
     for (int i = 0; i < a.size(); i++)
    {
        
        c =1;
        for (int j =i+1 ; j < a.size(); j++) {
            if(a[i]==a[j]) {a.erase(a.begin()+j); c++;j--;}
        }
        cout << a[i] << " " << c << "\n";
    }
}
int main() {
    func("     welcome  5443,;;;   to welcome ha,ha ha ha, wel to to the haha");
	return 0;
}