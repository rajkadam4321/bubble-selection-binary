#include<stdio.h>
int main()
{
    int n,arr[100],i,j,temp;
    printf("enter the no of element:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    { 
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    }
    printf("sorted array");
    for(i=0;i<n;i++){
        printf("%d",&arr[i]);

    }
    return 0;
   
   
       
}