
int partition(int a[],int s,int e)
{
    int pivot=a[s];
    int c=0;
    for(int i=s+1;i<=e;i++)
    {
        if(a[i]<=pivot)
            c++;
    }
    int pivot_i=c+s;
    a[s]=a[pivot_i];
    a[pivot_i]=pivot;
    int i=s;
    int j=e;
    while(i< pivot_i && j>pivot_i)
    {
        if(a[i]<=pivot)
            i++;
        else if(a[j]>pivot)
            j--;
        else
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
            i++;
            j--;
        }
    }
    return pivot_i;
    
        
}
void helper(int a[],int s,int e)
{
    if(s>=e)
        return;
    int p=partition(a,s,e);
    helper(a,s,p-1);
    helper(a,p+1,e);
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
     help
  */
	helper(input,0,size-1);
}

