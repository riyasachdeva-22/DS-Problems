// { Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M);  
  
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        // Function calling 
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 
// } Driver Code Ends


/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] 
Return the array
*/
vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    //Your code here
    vector<int>v;
    int i=0,j=0;
    bool flag=false;
  while(i<N && j<M)
  {
      if(i>0 && arr1[i]==arr1[i-1])
      {
          i++;
          continue;
      }
      if(arr1[i]>arr2[j])
      j++;
      else if(arr2[j]>arr1[i])
      i++;
      else
      {
          flag=true;
          v.push_back(arr1[i]);
          i++;
          j++;
      }
      
  }
   if(flag==false)
   v.push_back(-1);
    return v;
}

