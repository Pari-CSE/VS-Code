#include<stdio.h>
int search(int n,int arr[]){
    int k;
    printf("Enter element to search: ");
    scanf("%d",&k);
    for (int i=0;i<n;i++){
        if (arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,arr[100],r;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    r=search(n,arr);
    if (r>0){
        printf("Element found at %d",r);
    }
    else{
        printf("Element Not found!!");
    }
}
