#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fact(int n)
{
	if(n>0)
	{
		return fact(n-1)*n;
	}else
	{
		return 1;
	}
}

int main(int argc, char** argv) {
	
	int x = 10;
	printf("%d", fact(x));
	return 0;
}
