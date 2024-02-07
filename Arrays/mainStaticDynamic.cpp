#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char** argv) {
//	
//	int A[5];
//	int *p;
//	
//	p = (int *)malloc(5*sizeof(int));
//	
//	for(int i=0;i<5;i++)
//	{
//		printf("%d", A[i]);
//	}
//	free(p);
	
//	Increasing Array size
    int *p = new int[5];
    int *q = new int[10];
    int i;
    
    for(i=0;i<5;i++)
    {
    	q[i] = p[i];
    	delete []p;
    	p=q;
    	q=null;
    	cout<<"%d"<<p[i];
 	}
	
	return 0;
}
