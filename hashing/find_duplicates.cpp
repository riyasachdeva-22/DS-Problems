// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n)
{
    vector<int>v;
   bool flag=false;
   for(int i=0;i<n;i++)
   {
       int index=a[i]%n;
       a[index]=a[index]+n;
   }
   
   for(int i=0;i<n;i++)
   {
       if(a[i]/n >1)
       {
       v.push_back(i);
       flag=true;
       }
   }
   if(!flag)
   v.push_back(-1);
   return v;
     
    
}

