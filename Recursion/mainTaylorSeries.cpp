#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double e(double m, double n)
{
	static double p=1, f=1;
	double r;
	if(n==0)
	{
		return 1;
	}else
	{
		r=e(m,n-1);
		p=p*m;
		f=f*n;
		return r+p/f;
	}
}

int main(int argc, char** argv) {
	
	int x = 4;
	int y = 15;
	printf("%lf", e(x,y)); 
	return 0;	
}
