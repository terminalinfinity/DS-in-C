#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int a[],int n,int i){
    int lag=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&a[left]>a[lag])
        lag=left;
    if(right<n&&a[right]>a[lag])
        lag=right;
    if(lag!=i){
        swap(&a[i],&a[lag]);
        heapify(a,n,lag);
    }
}
void heapsort(int a[],int n){
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(a,n,i);
    for(int i=n-1;i>=0;i--){
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
}
void printarray(int a[],int n){
    for(int i=0;i<n;++i)
        printf("%d ",a[i]);
    printf("\n");
}
int main(){
    int a[]={1,33,5,74,30,20};
    int n=sizeof(a)/sizeof(a[0]);
    heapsort(a,n);
    printf("Sorted array is \n");
    printarray(a,n);
}
