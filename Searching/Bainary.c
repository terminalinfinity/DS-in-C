#include<stdio.h>
int main(){
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int left,right,mid,search;
    left=0;right=(10-1);
    scanf("%d",&search);
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==search){
            printf("%d is found %d index",search,mid);
            return 0;
        }
        else if(a[mid]<search){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    printf("%d is not found",search);
    return 0;
}
