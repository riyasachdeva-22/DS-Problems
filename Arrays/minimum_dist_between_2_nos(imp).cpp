// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
int minDist(int arr[], int n, int x, int y);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        cout << minDist(a, n, x, y) << endl;
    }
    return 0;
}
// } Driver Code Ends



int minDist(int a[], int n, int x, int y) {
    // code here
    int p=0;
    int m=INT_MAX;
    int i=0;
       for( i=0;i<n;i++)
    {
        if(a[i]==x || a[i]==y)
        {
            p=i;
            break;
        }
    }
    for(;i<n;i++)
    {
        if(a[i]==x || a[i]==y)
        {
        if(a[p]!=a[i] && i-p<m)
        {
            m=i-p;
            p=i;
        }
        else
        p=i;
        }
      
    }
    if(m==INT_MAX)
    return -1;
    else
    return m;
}
