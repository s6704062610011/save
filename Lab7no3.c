#include <stdio.h>
int i,j;
void printHead(int w){
	
}
void printBody(int w, int h){
	for(i = 0;i<h;i++){
		for(j=0;j<w;j++){
			if(i ==0 || i == h-1){
				printf("* ");
			}else if(j ==0 || j ==w-1){
				printf("*    ");
			}else{
				printf(" ");
			}
			
		}printf("\n");
	}
}
void main() {
	int width,height;
	scanf("%d %d",&width,&height);
	printHead(width);
	printBody(width,height);
	printHead(width);
}

