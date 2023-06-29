//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mean(int n , int a[]) {
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        return int((sum/n));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.mean(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends