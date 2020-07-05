// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>

using namespace std;
#define ll long long 

bool check(vector<ll> , vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        
        cout << check(arr,brr,n) << "\n";
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// arr : 1st given array
// brr : 2nd given array
// n : size of both the arrays

bool check(vector<ll> arr, vector<ll> brr, int n)
{
    //code here
   
  if (arr.size() != brr.size()) 
        return false; 
  
    // Store arr1[] elements and their counts in 
    // hash map 
    unordered_map<int, int> mp; 
    for (int i = 0; i < arr.size(); i++) 
        mp[arr[i]]++; 
  
    // Traverse arr2[] elements and check if all 
    // elements of arr2[] are present same number 
    // of times or not. 
    for (int i = 0; i < arr.size(); i++) { 
        // If there is an element in arr2[], but 
        // not in arr1[] 
        if (mp.find(brr[i]) == mp.end()) 
            return false; 
  
        // If an element of arr2[] appears more 
        // times than it appears in arr1[] 
        if (mp[brr[i]] == 0) 
            return false; 
  
        mp[brr[i]]--; 
    } 
  
    return true; 
}


