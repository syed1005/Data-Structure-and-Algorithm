#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n)
{
	if(n>0)
	{
		return n*(n-1)/2;
	}else
	{
		return 0;
	}
}

int main(int argc, char** argv) {
	
	int x = 10;
	printf("%d", fun(x));
	return 0;
}
