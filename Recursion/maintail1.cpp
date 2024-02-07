#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n)
{
	while(n>0)
	{
		printf("%d", n);
		n--;
	}
}

int main(int argc, char** argv) {
	
	int x = 5;
	fun(x);
}
