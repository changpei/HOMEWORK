#include <unistd.h>
#include <stdio.h>

void colle(int x,int y);
void my_puthchar(char c);

void my_puthchar(char c){
	write(1,&c,1);
}

void colle(int x,int y){
	if(x<=0||y<=0){}
	for(int j=1;j<=y;j++){
		for(int i=1;i<=x;i++){
			int flag=1;
			if(i==1&&(j==1||j==y)){
				flag=0;
				printf("0");
				if(x==1&&y==1){
					break;
				}
				if(x==1&&y>1){
					printf("\n");
					break;
				}
			}
			if(i==x&&(j==1||j==y)){
				flag=0;
				printf("0");
				printf("\n");
			}
			if((i>1&&i<x)&&(j==1||j==y)){
				flag=0;
				printf("-");
			}
			if((j>1&&j<y)&&(i==1||i==x)){
				flag=0;
				printf("|");
				if(i==x){
					printf("\n");
				}
			}
			if(flag){
				printf(" ");
			}
		}
		
		
	}
}

void main(void){
	colle(4,4);
	
}
