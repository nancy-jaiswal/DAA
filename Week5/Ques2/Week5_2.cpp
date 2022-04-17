#include<iostream>
#include<algorithm>
using namespace std;
void find_sum(int arr[],int n,int k)
{
    int flag=0;
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==k)
        {
            cout<<arr[i]<<" "<<arr[j];
            flag=1;
            break;
        }
        else if(arr[i]+arr[j]<k)
            i++;
        else
            j--;
    }
    if(flag==0)
        cout<<"No Such Element Exist";
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
      cin>>arr[i];
      int k;
      cin>>k;
      find_sum(arr,n,k);
   }
   return 0;
}
