#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n)
{
	if(n>100)
	{
		return n-10;
	}else
	{
		return fun(fun(n+11));
	}
}

int main(int argc, char** argv) {
	
	int x = 95;
	printf("%d", fun(x));
	return 0;
}
