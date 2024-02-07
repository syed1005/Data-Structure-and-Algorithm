#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//	write a program in C to read n number of values in an array and display them in reverse order.
    
    int n;
    int arr[n];
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		printf("Elements of %d = ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d", arr[i]);
	 } 
	 
	 printf("\n");
	 
	 for(int i=n-1;i>=0;i--)
	 {
	 	printf("%d", arr[i]);
	 }
	return 0;
}
