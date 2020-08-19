#include <iostream>
using namespace std;
#include<bits/stdc++.h>
//O(NLOGN)
int main() {
	//code
		int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    int n1=s1.length();
	    int n2=s2.length();
	     int f=1;
	    if(n1!=n2)
	   f=0;
	    sort(s1.begin(),s1.end());
	     sort(s2.begin(),s2.end());
	    // bool f=1;
	     for(int i=0;i<n1;i++)
	     {
	         if(s1[i]!=s2[i])
	         {
	        f=0;
	         }
	       
	     }
	     if(f==1)
	     cout<<"YES"<<endl;
	     else
	      cout<<"NO"<<endl;
	    
	}
	return 0;
}
