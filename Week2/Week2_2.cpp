#include<iostream>
#include<vector>
using namespace std;
void search(int arr[],int n)
{
    int flag=0;
    int a,b,c,ans=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            ans=0;
            ans=arr[i]+arr[j];
            for(int k=j+1;k<n;k++)
            {
                if (arr[k]==ans)
                a=i+1;
                b=j+1;
                c=k+1;
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    cout<<a<<","<<b<<","<<c;
    else cout<<"No sequence found";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,j,k;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
       j=i+1,k=n-1;
       while(j<n)
       {
          if(arr[i]+arr[j]==arr[k])
          {
              v.push_back(i+1);
              v.push_back(j+1);
              v.push_back(k+1);
              break;
          }
          else if(arr[i]+arr[j]>arr[k])
          {
              j++;
              k=n-1;
          }
          else
            k--;
       }
    }
    if(v.empty())
        cout<<"No sequence found";
    else
    {
        for(auto &it:v)
        cout<<it<<" ";
    }
    }
    return 0;
}
