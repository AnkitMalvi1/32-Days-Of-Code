// C code of animal.cpp
#include <stdio.h>

static int animals = 8;
const int i = 5;

int call_me(void)
{
	printf("%d %d", i, animals);
}


// C code of wash.cpp
#include <stdio.h>
#include "animal.cpp" // note that animal is included.

int main()
{
	call_me();
	printf("\n having fun washing!");
	animals = 10;
	printf("%d\n", animals);
	return 0;
}

//Output : 5 8
//having fun washing!
//10
