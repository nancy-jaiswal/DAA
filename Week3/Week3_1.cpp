#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    int i,temp,j;
    int comparison=0,shift=0;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            comparison++;
            arr[j+1]=arr[j];
            shift++;
            j--;
        }
        arr[j+1]=temp;
        shift++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"comparisons = "<<comparison<<endl;
    cout<<"shifts = "<<shift<<endl;
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
   insertion_sort(arr,n);
   }
}
