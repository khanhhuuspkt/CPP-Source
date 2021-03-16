// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> B;
        vector<int> C;
        int tmp = A[0];
        //int min=max=A[0];
        bool flag =0;
        for (int i =0; i < A.size()-1;i++) {
            if (A[i] < A[i+1] && flag ==0) {C.push_back(i);flag =1;}
            
            if (flag ==1 && A[i] > A[i+1] ) {flag =0; C.push_back(i);B.push_back(C);C.clear();}
            
            if ( flag ==1 && i == A.size()-2 && A[i] < A[i+1]) {flag =0; C.push_back(i+1);B.push_back(C);C.clear();}
            cout << "Ai" << A[i] <<"Ai+1" << A[i+1] << "A.size()-1" <<A.size()-1 << " flag" << flag << '\n';
        }
        return B;
    }
};

// { Driver Code Starts.

int main()
{   
    //int t;
    //cin>>t;
    //while(t--){
        int n = 7;
        //cin>>n;
        vector<int> A(n);
        A = {100,180,260,310,40,535,695};
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        cout << "$$$$$$$$$$$" << ans.size();
        // if(ans.size()==0)
        //     cout<<"No Profit";
        // else{
        //     for (int i=0; i<ans.size(); ++i){
        //         cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
        //     }
        // }cout<<endl;
    //}
    return 0;
}

  // } Driver Code Ends