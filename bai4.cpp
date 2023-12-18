#include<stdio.h>
#include<math.h> 
 int main(){
 	
 		int n,min=0; 
	printf("nhap mot so duong la =");
	scanf ("%d",&n);
	
	do 
    {
		min=min*10+n%10;
        }while(n/=10);
	 
	 
	 	printf("so dao nguoc cua n la:%d\n",min); 
	 }
 	 
 
 
