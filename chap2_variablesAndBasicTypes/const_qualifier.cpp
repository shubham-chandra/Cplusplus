#include <iostream>

int main()
{
	
/*
const qualifier : It transforms an object into a constant.
					They  must be initialized when it is defined.

*/

const int bufSize = 10;
//const int size;			// Error : not initialized
/*
variable bufsize is still an lvalue ,but now unmodifiable.
modifieng will result into error
*/

//bufSize = 20  //Compile time Error


/*
When a non const variable is defined at global scope, it can be used by other
files using the extern keyword.

const variable defined in global scope are by default local to the file. It cannot be
used on other file using extern keyword.

To make it usable by extern keyword in other file, we have to define using extern keyword

extern const bufSize = 10;

Then we can use it in other file using extern keyword.

Non const variables are extern by default. for const variable we have to explicitly specify it. 
*/

	return 0;
}