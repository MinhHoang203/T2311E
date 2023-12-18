#include<stdio.h>
#include<math.h>

int main(){
	
	
	int n,y,max=9,mac=0; 
	do{
	printf("nhap so n:");
	scanf ("%d",&n);
   }while(n<=0);

   while (n>0);
   {
    y=n%10;
    if(y>mac) mac=y;
    if(y<max) max=y;
    n=n/10;
}
     printf("\nin ra so lon hon  la :%d",max);
     printf("\nin ra so nho hon  la :%d",mac);
     
}
