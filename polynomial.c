#include<stdio.h>
void main()
{
	int n,i;
	struct polynomial {
		int coeff;
		int expo;
	}poly[10];
	printf("enter the number of terms in the polynomial expression: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the coefficient and exponent of term %d: ",i);
		scanf("%d %d",&poly[i].coeff,&poly[i].expo);
		}
	printf("the polynomial expression os: \n");
	for(i=0;i<n;i++){
		printf("(%dx^%d)",poly[i].coeff,poly[i].expo);
		if(i!=n-1){
		printf(" + ");
		}
	}
		
}	
