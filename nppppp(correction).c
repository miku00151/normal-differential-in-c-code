#include <stdio.h>
#include <stdlib.h>
int h,i,j,k,q,max,fx[100][99];
int main(){
    start:
    printf("input a max degree:");
    scanf("%d",&max);
    for(i=0;i<=max;i++){
        switch(i){
            case 0:{
            printf("input constat:");
            scanf("%d",&fx[0][i]);
            break;
                }
            default:{
                printf("input degree %d:",i);
                scanf("%d",&fx[0][i]);
                break;
                            }
        }
    }
    fx[0][i]=0;
    printf("input divisor:");
    scanf("%d",&q);
    for(j=0;j<=max+1;j++){
        for(k=max;k>=0;k--){
            fx[j+1][k]=fx[j+1][k+1]*q+fx[j][k];
            }
        }
        for(h=max;h>=0;h--){
            switch(h){
                case 0:{
                	switch(fx[h+1][h]){
                		case 0:{
							break;
						}
						default:{
							printf("%d \n\n",fx[h+1][h]);
							break;
						}
					}
                    
                    break;
                }
                default:{
                	switch(fx[h+1][h]){
                		case 0:{
							break;
						}
						case 1:{
							printf("(x-%d)^%d + ",q,h);
							break;
						}
						default:{
							printf("%d(x-%d)^%d + ",fx[h+1][h],q,h);
							break;
						}
					}
                    
                    break;
                }
            }
        }
            
        
    
goto start;
}
