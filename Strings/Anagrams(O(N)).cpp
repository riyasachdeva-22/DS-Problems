#include <iostream>
using namespace std;
#include<bits/stdc++.h>
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
	  
	  char c[26]={0};
	  for(int i=0;i<n1;i++)
	  {
	      c[s1[i]-'a']++;
	      c[s2[i]-'a']--;
	  }
	  for(int i=0;i<26;i++)
	  {
	      if(c[i])
	      {
	      f=0;
	     cout<<"NO"<<endl;
	     break;
	      }
	  }
	    
	
	     if(f==1)
	     cout<<"YES"<<endl;
	     
	  
	    
	}
	return 0;
}
