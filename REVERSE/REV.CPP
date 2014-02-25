#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[18]={"my name is saurabh"};
char y[18];
int total_char=17;
int l=0;
int count=0;
clrscr();
for(int i=0;i<18;i++)
{
if(x[i]==32)
{
count++;
}
}
for(i=0;i<=count;i++)
{
int loop=0;
	for(int j=total_char;j>=0;j--)
	{
		loop++;
		if(x[j]==32)
		{
			if(i==0)
			{
			for(int k=j+1;k<=total_char;k++)
			{
			y[l]=x[k];
			l++;
			}
			}
		       /*	else if(i==count)
			{
		       y[j]=32;
			for(int k=j;k<=total_char;k++)
			{
			y[l]=x[k];
			l++;
			}
			}*/
			else
			{
		       for(int k=j;k<=total_char;k++)
		       {
		       y[l]=x[k];
		       l++;
			}
			}
		  break;
	       }
	}
	if(i==count)
{
y[l]=32;
l++;
for(int k=0;k<=total_char;k++)
{
y[l]=x[k];
l++;
}
}
total_char=total_char-loop;

}
for(i=0;i<18;i++)
{
cout<<y[i];
}
getch();
}