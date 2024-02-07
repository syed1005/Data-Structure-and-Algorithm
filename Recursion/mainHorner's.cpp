#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Solution code for Recursive version*/

double e(int m, int n)
{
	static double r = 1;
	if(n==0)
	{
		return r;
	}else
	{
		r = 1 + m/n * r; 
	}
	return e(m,n-1);
}

/*Solution code for Iterative version*/

double e1(int m, int n)
{
	double r = 1;
	for(n>0;n--;)
	{
		r = 1 + m/n * r;
	}
	return r;
}

int main(int argc, char** argv) {
	
	int x = 2;
	int y = 15;
	printf("%lf\n", e(x,y));
	printf("%lf", e1(x,y));
	return 0;
}
