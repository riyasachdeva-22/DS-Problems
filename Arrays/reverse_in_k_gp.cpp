//reverse array in gps
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
    
    for(int i=0;i<n;i=i+k)
    {
        int s=i;
        int e=min(i+k-1,n-1);
        while(s<e)
        swap(mv[s++],mv[e--]);
    }
    return mv;
}
