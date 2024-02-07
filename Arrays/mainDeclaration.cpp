#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	
	int A[5];
	
	for(int i=0;i<5;i++)
	{
		printf("%d \n", &A[i]);
	}
	
	return 0;
}
