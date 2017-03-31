// https://www.cs.princeton.edu/courses/archive/fall06/cos217/lectures/14Memory-2x2.pdf
//http://www.inf.udec.cl/~leo/Malloc_tutorial.pdf
// http://stackoverflow.com/questions/32388847/understanding-and-implementing-malloc
// https://danluu.com/malloc-tutorial/
#include <iostream>
#include <unistd.h>

using namespace std;
int main(){
	void *p;
	size_t s = 100;
	p = sbrk(s);
	return 0;
}
