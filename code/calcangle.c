#include<stdio.h>
#include<stdlib.h>
float calcAngle(int ,int);
void main()
{
	int hr,m;
	printf("enter the time in hour and minutes:\n");
	scanf("%d%d",&hr,&m);
	printf("%f",calcAngle(hr,m));
}
float calcAngle(int hr,int m)
{
	float angle;
	if(hr<0||hr>12||m<0||m>60) return 0;
	if(hr==12) hr=0;
	if (m==60) m=0;
	hr=hr*30+0.5*m;
	m=m*6;
	angle=abs(m-hr);
	return angle;
}