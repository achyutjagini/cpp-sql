import java.io.*; 


class sortMethod
{
void sorts(int arr[])
{
int n=arr.length;
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

public static void main(String args[])
{
sortMethod obj=new sortMethod();

int arr[]={1,7,5,6,2};
int n=arr.length;

obj.sorts(arr);

for(int i=0;i<n;i++)
    System.out.print(arr[i] +" ");
}
}