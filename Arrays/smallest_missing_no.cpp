#include <bits/stdc++.h> 
using namespace std; 
int firstMissingPos(int A[], int n) 
{ 
bool p[n+1]={false};
for(int i=0;i<n;i++)
{
	if(A[i]>0 && A[i]<=n)
	p[A[i]]=true;
}
for(int i=1;i<=n;i++)

	if(!p[i])
	return i;
	return n+1;

}
int main() 
{ 
  
    int A[] = { 0, 10, 2, -10, -20 }; 
    int size = sizeof(A) / sizeof(A[0]); 
    cout << firstMissingPos(A, size); 
} 
