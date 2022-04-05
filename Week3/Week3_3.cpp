#include<iostream>
using namespace std;

void Merge_Sort(int arr[],int l,int m,int r)
{
    int n1=(m-l+1);
    int n2=(r-m);

    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k++]=L[i++];
        }
        else
        {
            arr[k++]=R[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }


}
void Merge(int arr[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        Merge(arr,l,mid);
        Merge(arr,mid+1,r);
        Merge_Sort(arr,l,mid,r);
    }

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        Merge(arr,0,n-1);
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                flag=1;
                 break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
   }
   return 0;
}
