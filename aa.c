#include<stdio.h>
int main(){

int i,a,b;
int n;
int arr[n];
printf("enter size of array");
scanf("%d",&n);
    for(i=0;i<n;i++){
   printf("enterelement %d of array: ",i+1);
   scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++){
if(arr[i]%2!=0){
a=arr[i]*2;
    printf("%d ",a);
}
else if(arr[i]%2==0){
b=arr[i]+10 ;
printf("%d ",b);

}
else printf(" it is zero"); 
}


    return 0;
}