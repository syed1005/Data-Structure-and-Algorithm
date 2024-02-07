#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int A[5] = {1,2,3,4,5};
	
	for(int i=0;i<5;i++)
	{
//		printf("%d ", A[i]); output is 1 2 3 4 5
//		printf("%d ", A[2]); output is 3 3 3 3 3
//		printf("%d ", 2[A]); output is 3 3 3 3 3
		printf("%d ", *(A+2)); // output is 3 3 3 3 3 
	}
	return 0;
}
