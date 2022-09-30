#include<stdio.h>
int main()
{
    int n;
    printf("enter the length of array: ");
    scanf("%d",&n);
    int arr[n],i,j,k,temp;
    for(i=0;i<n;i++){
        printf("enter value in array:  ");
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
        k=n;
    }
    else{
        k=n-1;
    }
    for(i=0;i<k;i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
    return 0;
}
