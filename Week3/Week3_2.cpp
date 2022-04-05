#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
    *b=temp;
}
void selection_sort(int arr[],int n)
{
    int min=0,comparisons=0,swaps=0;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            comparisons++;
            if(arr[j]<arr[min])
            min=j;
        }
        swap(&arr[min],&arr[i]);
             swaps++;
    }
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

      cout<<endl;
      cout<<"comparisons = "<<comparisons<<endl;
      cout<<"swaps = "<<swaps<<endl;
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
      selection_sort(arr,n);
   }
   return 0;
}
