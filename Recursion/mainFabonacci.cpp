#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Using Recursion method*/

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fib(n-2) + fib(n-1);
	}
}

/*Using Iteration*/

int fibI(int n)
{
	int t0 = 0, t1 = 1, s, i;
	if(n<=1)
	{
		return n;
	}
	for(i=2;i<=n;i++)
	{
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}

/*Using Memoisation*/

int F[10];
int fibM(int n)
{
	if(n<=1)
	{
		F[n] = n;
		return n;
	}else
	{
		if(F[n-2] == -1)
		{
			F[n-2] = fibM(n-2);
		}
		if(F[n-1] == -1)
		{
			F[n-1] = fibM(n-1);
			F[n] = F[n-2] + F[n-1];
		}
		return F[n-2] + F[n-1];
	}
}

int main(int argc, char** argv) {
	
	int i;
	for(i=0;i<10;i++)
	{
		F[i] = -1;
	}
	
	printf("%d", fibM(7));
	return 0;
	
}
