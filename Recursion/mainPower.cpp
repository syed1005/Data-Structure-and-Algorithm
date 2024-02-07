#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int power(int m, int n)
{
	if(n==0)
	{
		return 1;
	}else
	{
		return power(m,n-1)*m;
	}
}

int power1(int m, int n)
{
	if(n==0)
	{
		return 1;
	}
	
	if(n%2==0)
	{
		return power1(m*m,n/2);
	}else
	{
		return m* power1(m*m, (n-1)/2);
	}
}

int main(int argc, char** argv) {
	
	int x = 2;
	int y = 9;
	printf("%d\n", power(x,y));
	printf("%d", power1(x,y));
	return 0;
}
