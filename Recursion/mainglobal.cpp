#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n)
{
	int x = 0;
	if(n>0)
	{
		x++;
		return fun(n-1) + x;
	}
}

int main(int argc, char** argv) {
	
	int a = 5;
	printf("%d", fun(a));
	return 0;
}
