#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        int key;
        cin>>key;
        int comparison=0,flag=0;
        int l=0,r=n;
        while (l<=r)
        {
            comparison++;
            int m=l+(r-l)/2;
            if(arr[m]==key){
                flag=1;
                break;
            }
            else if(arr[m]<key)
                l=m+1;
            else
                r=m-1;
        }
        if(flag==1)
            cout<<"Present "<<comparison<<endl;
        else
            cout<<"Not Present "<<comparison<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;
void binary_s(int arr[],int l,int h,int key)
{
    int comparison=0;
    bool flag=0;
    while(l<=h)
    {
        comparison++;
        int mid=l+(h-l)/2;
       if(arr[mid]==key){
            flag=1;break;
        }else if(arr[mid]>key)
            h=mid-1;
        else l=mid+1;
    }
    if(flag)cout<<"Present "<<comparison<<endl;
        else cout<<"Not Present"<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
           int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++) cin>>arr[i];
        int key;
        cin>>key;
       binary_s(arr,0,size,key);
    }
    return 0;
}
