#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    int c=0;
	    for(int i=n-1;i>=1;i--)
	    {
	        int l=0;
	        int r=i-1;
	        while(l<r)
	        {
	        if(a[l]+a[r]>a[i])
	        {
	            c=c+r-l;
	            r--;
	        }
	        else
	        l++;
	    }
	    }
	    cout<<c<<endl;
	}
//	return 0;
	return 0;
}
