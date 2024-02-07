#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Simple Function*/

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}else
	{
		return fact(n-1)*n;
	}
}

int nCr(int n, int r)
{
	int num, den;
	num=fact(n);
	den=fact(r)*fact(n-r);
	return num/den;
}

/*Using Pascal Triangle*/

int NCR(int n, int r)
{
	if(r==0 || n==r)
	{
		return 1;
	}
	else
	{
		return NCR(n-1, r-1) + NCR(n-1, r);
	}
}
int main(int argc, char** argv) {
	
	printf("%d \n", NCR(7,5));
	return 0;
}
