#include<stdio.h> 
int main()  
{ 
int n,sum=0,rem; 
printf("Enter the integer number: "); 
scanf("%d",&n);  
do  
{ 
rem=n%10;  
n=n/10;  
sum=sum+rem;  
} while (n>0);
printf("\nThe sum of the digits are: %d",sum); 
return 0; 
} 