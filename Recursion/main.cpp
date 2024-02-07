#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fun(int n)
{
	if(n>0)
	{
	    printf("%d", n);
	    fun(n-1);
	}
}

int main() {
	
	int x = 5;
	fun(x);
}
