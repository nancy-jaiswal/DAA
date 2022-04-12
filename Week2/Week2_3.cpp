#include<iostream>
#include<algorithm>
using namespace std;

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
        sort(arr,arr+n);
        int l,h,cnt=0;
        for(int i=0;i<n;i++)
        {
            l=i;
            h=n-1;
            while(l<h)
            {
            if(arr[h]-arr[l]==k)
            {
                cnt++;
                l++;
                h--;
            }
            else if(arr[h]-arr[l]>k)
                h--;
            else
                l++;
            }
        }
        cout<<cnt<<endl;;
    }
    return 0;
}
