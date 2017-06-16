#include <stdio.h>
#include <stdlib.h>
int sum[9999999999];
int max =0;
int main(){
	int i,j,k;
	printf("Welcome to the differential program.\nYou can use degree is 1 to 999999999.\n\n");
	start:
	printf("please input a max degree:");
	scanf("%d",&max);
	for(i=0;i<=max;i++){
		switch(i)
		{
			case 0:
				printf("input constant :");
				scanf("%d",&sum[i]);
				break;
			default:
				printf("input degree %d :",i);
				scanf("%d",&sum[i]);
				break;
			
		}
	}
	for(i=max;i>=0;i--){
		j=i-1;
		k=sum[i]*i;
		if(i>1){
			printf("%dx^%d + ",k,j);
		}
			else{
				if(i==1){
					printf("%d\n\n\a",k);
				}
				else{
					}
				
			
		}
		
	}
	goto start;
	system("pause");
	return 0;
}
