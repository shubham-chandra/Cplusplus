#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


//Utility for vector printing
void print_vector(vector<int> &vec){
	for (vector<int>::size_type i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

int main(){

/*
A vector is a collection of objects of a single type, each of
which has an associated integer index.

the library takes care of managing memory associated with storing strings.

The vector is a container as it contains other object.

All objects in container must be of same type.
*/

/*
vector is a not a type; It is template that we can use to define
any number of types. Each of vector type specifies as element type.
Hence, vector<int> and vector<string> are types.
*/

/*
Defining and initializing vector

value initialization:
if its primitive type then it will be default value.
if its a class then default constructor
if no default constructor then the data menbers are initialized

*/

vector<int> v1;			// Default constructor; v1 empty
vector<int> v2(5,3);	// 5 elements with value 3
vector<int> v3(7);		// 7 value initialized objects for int => 0
vector<int> v4(v2);




 

print_vector(v2);
print_vector(v3);
print_vector(v4);




/*
Operations on vector:

Like string, size() and empty() are defined for vector.
Like string, there is also vector<type>::size_type for holding return of size()
Like string, it supports subscripting
To add an element we use push_back method.
*/

vector<int>::size_type v_size =  v2.size();
//vector::size_type v_size = v2.size(); // Error npt vector type declaration

cout << v_size << endl;

v2.push_back(78);

print_vector(v2);

/*
An element must exist in order to subscript it, elements are not added when we assign through a subscript.
*/


return 0;
}