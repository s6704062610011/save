#include<stdio.h>

int main (void){
	int i,n,x;
	char a[][8] = {"Latte","Espresso","Iris","Frappucino","Cappucino","Mocha","Americano","Black eye"};
	int p[] = {35,45,30,50,45,48,39,35};
	
	scanf("%d",&n);
	
	int l[n];
	for (i=0;i<n;i++){
			scanf("%d",&l[n]);
	}

	scanf("%d",&x);
	if (x >= 1 && x <= 8) {
            printf("%s(%d)\n", a[x - 1], p[x - 1]);
        }
	
}
