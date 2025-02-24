#include<stdio.h>
int findMin(int arr[],int size)
{
    int min = arr[0];
    for(int i=1;i<size;i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    int minElement;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    minElement = findMin(arr,n);
    printf("The minimum element in the array is: %d \n",minElement);
    return 0;
}
