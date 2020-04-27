#include <stdio.h>

int main(){
   int num,i,j,space=0;

   scanf("%d",&num);

   for(i=0;i<num;i++){

   	for(j=0;j<num+(num-1)-i;j++){
   		if(j<space)
   			printf(" ");
   		else
   			printf("*");
	   }
   	space++;
   	printf("\n");
   }
   return 1;
}
