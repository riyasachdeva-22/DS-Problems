#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool helper(char s[],int st,int e)
{
    if(st==e)
    return true;
    if(s[st]!=s[e])
    return false;
    if(s[st]<e)
    return helper(s,st+1,e-1);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int l;
	    cin>>l;
	   char s[l];
	for(int i=0;i<l;i++)
	cin>>s[i];
	int st=0;
	int e=l-1;
	   if(helper(s,st,e))
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
