#include<stdio.h>
int main(){
    int n, target,low,high,mid,found=0;
    //input no. of elements
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    int arr[n]; //Declare an array of size 'n'
    printf("Enter %d elements in sorted order: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //input the target element
    printf("Enter the element to search:");
    scanf("%d",& target);
    //initialize pointers
    low=0;
    high=n-1;
    //binary search
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]=target)
        {
            printf("Element found at index %d \n",mid);
            found=1;
            break;
        }
        else if (arr[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    //if element not found
    if(found=0)
    {
        printf("Element not found in array \n");
    }
    return 0;
}