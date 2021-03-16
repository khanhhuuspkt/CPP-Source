#include <iostream>
#include<string>
using namespace std;
string swap(int i,int j, string TMP){
    char tmp;
    tmp = TMP[i];
    TMP[i] = TMP[j];
    TMP[j]=tmp;
    return TMP;
}
int main() {
	//code
	string A,B,TMP;
	int out,t;
	cin >> t;
	while(t>=1) {
	    out = 0;
        cin >> A >> B;
        if (A != B) {
	    for (int i =0; i < A.length() - 1;i++){
	        if (out ==1) {break;}
	        for (int j = i +1; j < A.length(); j++){
	           TMP = A;
	           TMP = swap(i,j,TMP);
               //cout << TMP << " $$$\n";
	           if (TMP == B) {out =1; break;}
	        }
	    }
        }
	    cout << out << "\n";
	    t--;
	}
	return 0;
}