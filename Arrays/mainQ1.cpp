#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//	Write a program in C to store elements in an array and print them.
    
    int arr[10] = {1,1,2,3,4,5,6,7,8,9};
    
    for(int i=0;i<10;i++)
    {
    	printf("%d", arr[i]);
	}
	return 0;
}
