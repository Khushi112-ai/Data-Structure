#include<stdio.h>
int main(){
    int LA[100],N,K,ITEM;
    //Step 1: get array size from user
    printf("Enter the no. of elements in the array(max 100):");
    scanf("%d",&N);
    //validate N
    if(N<0||N>100){
        printf("invalid size! must be between 1 and 100.\n");
        return 1;
    }
   
    //Step 2: get array elements from user
    printf("Enter %d elements:",N);
    for(int i=0;i<N;i++){
        scanf("%d",&LA[i]);
    }
    //Step 3: get the position(K) and ITEM to insert
    printf("Enter the position to insert(0-based index):");
    scanf("%d",&K);
    //validate K
    if(K<0||K>N){
        printf("invalid position! must be between 0 and %d.\n",N);
        return 1;

    }
    //ensure array size limit is not exceeded
    if(N==100){
        printf("array is full! cannot insert more elements.\n");
        return 1;
    }
    
    
    printf("Enter the item to insert:");
    scanf("%d",&ITEM);
    //Step 4: shift elements to the right
    for(int J=N-1;J>=K;J--){
        LA[J+1]=LA[J];
    }
    //Step 5: Insert the new element
    LA[K]=ITEM;
    //Step 6: Increment N
    N=N+1;
    //Step 7: Print the updated array
    printf("Updated array:");
    for(int i=0;i<N;i++){
        printf("%d",LA[i]);
    }
    printf("\n");
    return 0;
}