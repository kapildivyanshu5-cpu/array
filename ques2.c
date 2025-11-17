#include<stdio.h>
int main(){
/*Find the difference between the sum of elements at even indices to the sum of elements at odd indices.*/
int a=0,b=0,c,i;
int n;
printf("enter size of araay");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
printf("enter the %d element of an array",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
if(i%2==0){
a=a+arr[i];

}
else if(i%2!=0){
b=b+arr[i];



}
else printf("it is zero");

}
c=a-b;

printf("this is diffrence %d",c);





    return 0;
}