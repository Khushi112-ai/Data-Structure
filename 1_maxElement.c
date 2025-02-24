#include<stdio.h>
int findMax(int arr[],int size)
{
    int max = arr[0];
    for(int i=1;i<size;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    int maxElement;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    maxElement = findMax(arr,n);
    printf("The maximum element in the array is: %d \n",maxElement);
    return 0;
}
