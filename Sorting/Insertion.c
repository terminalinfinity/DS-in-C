#include<stdio.h>
int main(){
    int a[25],i,j,n,temp;
    printf("Enter number of element:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("Sorted list:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
