#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int toh(int n, int A, int B, int C)
{
	if(n>0)
	{
		toh(n-1, A, C, B);
		printf("(%d %d) \n", A, C);
		toh(n-1, B, A, C);
	}
}

int main(int argc, char** argv) {
	
	toh(3, 1, 2, 3);
	return 0;
}
