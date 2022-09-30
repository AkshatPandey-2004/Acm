#include<stdio.h>
main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n],i=0,sum=0,global_sum=0;
    for(i=0;i<n;i++){
        printf("Enter num in array: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        if(global_sum<sum){
            global_sum=sum;
        }
    }
    printf("%d",global_sum);
}
