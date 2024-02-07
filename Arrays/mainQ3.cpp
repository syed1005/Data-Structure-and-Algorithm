#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//	Write a program in C to find the sum of all elements of the array.
    
    int n;
    int arr[n];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    {
    	printf("Enter the elements of array : %d\n ", i);
    	scanf("%d", &arr[i]);
	}
	
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	printf("Sum of an array is : %d\n ", sum);
    
}
