#include<stdio.h>
int main()
 {
 int table=0;
 int num=1;
 int num1=1;
 
 printf("Enter Table Number : ");
 scanf("%d",&num);
 
 printf("Enter Range : ");
 scanf("%d",&num1);
 
 
 while(table<num1)
 {
 	printf("%d * %d = %d\n",num,table,(table*num));
 	table=table+1;
 }
 
 
 
 
 
 
 
 
 
 }
