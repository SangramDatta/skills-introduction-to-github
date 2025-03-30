//Program to accept basic salary of an employee and find out salary if salary greater than 20000 deduct a tax 20% other than 15%.
#include<stdio.h>
int main(){
	int bs,taxamount,ts;
	float rate;
	printf("enter the salary");
	scanf("%d",&bs);
	if(bs>20000){
		rate=0.20;
	}
	else{
		rate=0.15;
	}
	taxamount=bs*rate;
	
	ts=bs-taxamount;
	printf("total salary is %d",ts);
	return 0;
}
