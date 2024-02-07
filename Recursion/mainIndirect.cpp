#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int funB(int n);
int funA(int n)
{
	if(n>0)
	{
		printf("%d", n);
		funB(n-1);
	}
}

int funB(int n)
{
	if(n>1)
	{
		printf("%d", n);
		funA(n/2);
	}
}

int main(int argc, char** argv) {
	
	int x = 5;
	funA(x);
	return 0;
}
