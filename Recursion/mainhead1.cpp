#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n)
{
	int i = 1;
	while(i<=n)
	{
		printf("%d", i);
		i++;
	}
}

int main(int argc, char** argv) {
	
	int x = 5;
	fun(x);
}
