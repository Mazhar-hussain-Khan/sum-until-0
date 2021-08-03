/* Mazhar Hussain   registration : 20MDELE098
email:20Mdele098@uetmardan.edu.pk  */
/* write a program that display the sum when zero is entered */
#include<stdio.h>
int main(){
	
	int num,sum;//variable declaration//
	do{
		printf("enter the number for sum and zero for ending:\n");//asking to enter number and zero for ending //
		scanf("%d",&num);//saving number//
		sum=sum+num;//calculation of sum//
	}
	while(num!=0);{
	printf("the sum is %d",sum);
	}
	return 0;
}
