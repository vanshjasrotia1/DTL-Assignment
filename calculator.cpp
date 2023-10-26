#include<stdio.h>
#include<math.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mult(int a,int b)
{
	return a*b;
}
int expo(int a,int b)
{
	return pow(a,b);
}
int main()
{
	int a,b;
	printf("Enter:");
	scanf("%d %d",&a,&b);
	
	add(a,b);
	printf("%d\n",add(a,b));
	sub(a,b);
	printf("%d\n",sub(a,b));
	mult(a,b);
	printf("%d\n",mult(a,b));
	expo(a,b);
	printf("%d\n",expo(a,b));;
	return 0;
}
