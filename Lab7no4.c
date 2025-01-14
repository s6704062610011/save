#include <stdio.h>
int checkNumber(int n1, int n2){
	if(n1 > 20&& n1<60&&n2 >20&&n2<60){
		return 1;
	}else{
		return 0;
	}
}
int multiply(int n1, int n2){
	return n1*n2;
}
int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	if(checkNumber(num1,num2)==1){
		printf("%d \n",multiply(num1,num2));
	}
	return 0;
}

