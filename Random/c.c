#include<stdio.h>
int main(){
    for(int i =1; i<6; i++){
    	for(int j=1; j<6; j++){
			if(i==1){
				printf("%d",i);
			}
			else if(i==5){
				printf("%d",i);
			}
    		else if(i>j){
				printf("%d",i);
			}
			else {
    			printf("%d",(i+1));
			}
		}
		printf("\n");
	}
    
}

/*
11111
22233
33444
45555
55555


*/