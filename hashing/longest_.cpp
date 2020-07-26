// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

int findLongestConseqSubseq(int [], int );

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		
		// input array elements
		for(int i=0;i<n;i++)
		    cin>>a[i];
		
		cout<< findLongestConseqSubseq(a, n)<<endl;
		
	}
	return 0;
}// } Driver Code Ends




// function to find longest consecutive subsequence
// n : size of array
// arr[] : input array
int findLongestConseqSubseq(int arr[], int n)
{
    //Your code here  
    unordered_map<int,bool>m;
    for(int i=0;i<n;i++)
    m[arr[i]]=true;
    int s=0;
    int max_l=0;
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]!=false)
        {
            int x=1;
            int l=1;
            m[arr[i]]=false;
            while(m[arr[i]+x]==true)
            {
                l++;
               
                m[arr[i]+x]=false;
                 x++;
            }
            x=1;
             while(m[arr[i]-x]==true)
            {
                l++;
               
                m[arr[i]-x]=false;
                 x++;
            }
            if(l>max_l)
            {
                s=arr[i]-x+1;
               max_l=l;
            }
            else if(max_l==l)
            {
                for(int j=0;j<n;j++)
                {
                    if(arr[j]==s)
                    break;
                    else if(arr[i]-x+1 ==arr[j])
                    {
                    s=arr[i]-x+1;
                    break;
                    }
                }
            }
        }
    }
    return max_l;
}
