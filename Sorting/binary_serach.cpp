// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int bin_search(int A[],int left,int right,int k);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found<<endl;
    }
}
// } Driver Code Ends


/*You need to complete this function */
int bin_search(int A[], int left, int right, int k)
{
    
while(left<=right)
{
    int m=(left+right)/2;
       // Check if x is present at mid 
      if(A[m]==k)
      return m;
       if(A[m]<k)
       left++;
       else 
       right--;
    
}
return -1;
}
