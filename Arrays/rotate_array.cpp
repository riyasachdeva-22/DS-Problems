void rotateArr(int arr[], int d, int n)
{
    // code here
    int j=0;
    int temp[d];
    for(int i=0;i<d;i++)
    temp[i]=arr[i];
    for( j=0;(j+d)<n;j++)
    {
        arr[j]=arr[j+d];
    }
    int k=0;
    for(int i=j;i<n;i++)
    {
    arr[i]=temp[k];
    k++;
    }
}

