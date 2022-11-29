#include<stdio.h>
int main(){
    int arr[]={10,20,30,50,60};
    int found=0,search;
    scanf("%d",&search);
    for(int i=0;i<5;i++){
        if(arr[i]==search){
            printf("Item is found");
            found++;
            break;
        }
    }
        if(found==0){
            printf("Item is not found!!");
        }

    return 0;
}
