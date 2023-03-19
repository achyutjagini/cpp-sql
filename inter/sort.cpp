#include<bits/stdc++.h>
#include<vector>
using namespace std;

void sorts(int arr[],int n)
{
//int n=sizeof(arr)/sizeof(arr[0]);
int temp;
int min_idx;
int i,j;

for(i=0;i<n-1;i++)
{

min_idx=i;

for(j=i+1;j<n;j++)
{
if(arr[min_idx]>arr[j])
   {
   min_idx=j;
   }
}

temp=arr[min_idx];
arr[min_idx]=arr[i];
arr[i]=temp;

}
}

int main()
{
int arr[]={1,7,5,6,2};
int n=sizeof(arr)/sizeof(arr[0]);

//cout<<n<<endl;
sorts(arr,n);

for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
