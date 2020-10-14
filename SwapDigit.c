#include<stdio.h>
void main()
{
  int num,temp,count=0,first,last,cnt,pow=1,flag=0;
  printf("Enter the number you want to swap the first and the last digit of:\n");
  scanf("%d",&num);
  
  if(num<0) // If user enters a negative number
  {
    num=num*(-1);
    flag++;
  }
  temp=num; // Variable for temporary calculations
  if(temp!=0) //Block to count the number of digits in entered number
  {
    while(temp>0)
    {
      temp=temp/10;
      count++;
    }
  }
  else
  {
    count++;
  }
  
  cnt=count; // Copy value of count for temporary calculations
  first=num;
  while(first>10) // To find out the first digit in entered number
  {
    first=first/10;
  }

  last=num%10; // To find out the last digit in enterd number
  while(cnt>0)
  {
    pow=pow*10;
    cnt--;
  }

  pow=pow/10;
  num=num-last;
  num=num-(first*(pow));
  num=num+first;
  num=num+(last*(pow));
  if(flag==1) // Check if user had entered a negative number
  {
    num=num*(-1);
  }
  printf("%d\n",num);
}
