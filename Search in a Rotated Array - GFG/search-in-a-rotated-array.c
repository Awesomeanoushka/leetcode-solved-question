//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int A[n];
        for(int i = 0; i < n; i++)
            scanf("%d",&A[i]);
        int key;
        scanf("%d",&key);
        int answer = search(A, 0, n - 1, key); 
        printf("%d\n",answer);
    }
return 0;
}

// } Driver Code Ends


//User function Template for C


    
int search(int A[], int l, int h, int key) { 
    for(int i=l;i<=h;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
} 
    
