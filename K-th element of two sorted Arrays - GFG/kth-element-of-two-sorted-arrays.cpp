//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int p)
    {
        int i=0,j=0,k=0;
        int arr3[m+n];
        while(i<n && j<m){
              if(arr1[i]<arr2[j]){
                  arr3[k]=arr1[i];
                  i++;
                  k++;
              }
              else{
                  arr3[k]=arr2[j];
                  j++;
                  k++;
              }
        }
        while(i<n){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        while(j<m){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        return arr3[p-1];
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends