#include<iostream>
using namespace std;
void binary(int arr[],int l,int r,int key)
{
   int mid,flag=0,ans,x,y,start=0,end=0;;
   while(l<=r)
   {
      mid=(l+r)/2;
      if(arr[mid]==key)
      {
         x=mid;
         y=mid;
         while(x>0 && arr[x-1]==key) x--;
         start=x;
         while(y<r && arr[y+1]==key) y++;
         end=y;
         flag=1;
         ans=end-start+1;
         break;
      }
      else if(arr[mid]<key)  l=mid+1;
      else r=mid-1;
   }
   if(flag==1)
   cout<<key<<"-"<<ans;
   else
   cout<<"Key not present";
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
        int key;
        cin>>key;
    binary(arr,0,n-1,key);
    }
    return 0;
}
