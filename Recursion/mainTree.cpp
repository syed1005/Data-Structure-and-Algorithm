#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n)
{
	if(n>0)
	{
		printf("%d", n);
		fun(n-1);
		fun(n-1);
	}
}

int main(int argc, char** argv) {
	
	int x = 3;
	fun(x);
	return 0;
}
