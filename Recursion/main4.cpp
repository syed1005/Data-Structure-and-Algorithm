#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Rectangle
{
	int length;
	int breadth;
};

int main(int argc, char** argv) {
	
	struct Rectangle r;
	
	struct Rectangle r = {10,5};
	
	r.length = 10;
	r.breadth = 15;
	
	printf("Area of Rectangle is %d"r.length * r.breadth);
}
