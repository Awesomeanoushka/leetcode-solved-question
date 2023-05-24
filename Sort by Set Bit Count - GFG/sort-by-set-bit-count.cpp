//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    static bool comp(int a,int b){
            return __builtin_popcount(a)>__builtin_popcount(b);
    }
            
    void sortBySetBitCount(int arr[], int n)
    {
        
        
        stable_sort(arr,arr+n,comp);
        
        //we define comp function that compares the set bit count of 
        //if set bit count of a number is more it comes first when sorted
        // stable word used as if when count of set is same in any numbers 
        //it will place that number first that came first ie by index
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends