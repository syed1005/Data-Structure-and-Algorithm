#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//	Write a program in C to copy the elements of one array into another array.

    int p[10];
    int q[10];
    int i, n;
    scanf["%d", &n];
    
    for(i=0;i<n;i++)
    {
    	printf("Enter the elements of an array p : %d\n ", i);
    	scanf("Enter the number : %d\n ", &p[i]);
	}
    
    for(i=0;i<n;i++)
    {
    	q[i] = p[i];
	}
	
	for(i=0;i<n;i++)
    {
    	printf("%d\n", p[i]);
	}
	
	for(i=0;i<n;i++)
    {
    	printf("%d\n", q[i]);
	}
	
}
