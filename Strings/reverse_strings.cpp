 #include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	  
	  string s;
	  cin>>s;
	  int n=s.length();
	    stack<char>stack1;
	    for(int i=0;i<n;i++)
	    {
	    
	    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	    stack1.push(s[i]);
	    }
	      for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	        {
	            s[i]=stack1.top();
	            stack1.pop();
	        }
	    }
	
	    cout<<s;
	    cout<<endl;
	    
	}
	return 0;
}
