//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string a[],int n)
    {
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        string s="";
        int max=0;
        for(auto it=m.begin();it!=m.end();it++){
            string key=it->first;
            int value=it->second;
            if(value>max){
                max=value;
                s=key;
            }
            else if(value==max){
                if(key<s){
                    s=key;
                }
            }
            
        }
        vector<string>ans;
        ans.push_back(s);
        string p=to_string(max);
        ans.push_back(p);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends