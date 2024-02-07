#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*(1)
int f(int n)

{

static int i = 1;

if (n>=5)return n;

n = n+i;

i++;

return f(n);

}*/

/*(2)
void foo (int n, int sum)
{

     int k = 0, j = 0;

     if (n = = 0) return;

     k = n % 10;

     j = n/10;

     sum = sum + k;

     foo (j, sum);

     printf(“%d”, k);

}*/

/*(3)*/
int f (int &x, int c)
{
    c = c — 1; 
    if (c = = 0) return 1; 
      x = x + 1; 

    return f(x,c) * x;
}

int main(int argc, char** argv) {
	
	/*(1)
	printf("%d", f(1)); 
	output - 7
	*/
	/*(2)
	int a = 2048, sum = 0;

    foo (a, sum);

    printf(“%d\n”, sum);
    */
    /*(3)*/
    int m = 5;
    int n = 5;
    printf("%d", f(m,n));
	return 0;
}
