#include<stdio.h>
main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i,j,k,sum;
    sum=0;
    for(i=0;i<n;i++){
        printf("Enter the element in array:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++);{
            if(arr[i]+arr[j]==10){
                sum= sum+1;
            }
        }
    }
    printf("\n %d",sum);
}
