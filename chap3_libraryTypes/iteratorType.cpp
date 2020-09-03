#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main(){

/*
An iterator is a type that lets us examine the elements in a container
and navigate from one lement to another.

The library defines an iterator for each of the standard container.

All library containers define iterator , but only few support subscripting.

*/

/*
Each of the container type defines a member named iterator
 that is a synonym for the actual type of its iterator.
*/

vector<int>::iterator iterBegin; // Defines as iterator of vector<int>
vector<int>::iterator iterEnd;
/*
The begin and end operation:

Each container defines an pair of functions named being and end that return iterators.

*/

vector<int> ivec;
ivec.push_back(17);
ivec.push_back(78);
ivec.push_back(96);
ivec.push_back(12);

iterBegin = ivec.begin();
iterEnd = ivec.end();

/*
Now iterBegin point to the element ivec[0]
and iterEnd points to the element one past the end element of ivec.
for an empty vectorv iterator begin and end are same.

The iterator returned by the end operation does not denote
an actual element in the vector. Instead, it is used as an sentinel indication
of the end of vector. 
*/


/*

Dereferance and increment on vector iterator:

Iterator type use the dereference operator(* ) to access elements to which iterator refer.

The dereference operator returns an lvalue so ve can also assign it.

We can also increment the iterator using the ++ , or + n .Incrementing the iterator
means we are advancing the iterator to point to next element.
*/

cout << *iterBegin << endl;
*iterBegin = 454;

cout << *iterBegin << endl;

iterBegin++;
cout << *iterBegin << endl;

/*
What if we want an iterator that is used only for reading?
The library container also defien a const_iterator, that can only be used for reading elements,
any attempt to write an element is illegal.
*/

vector<int>::const_iterator citer;

citer = ivec.begin();

cout << *citer << endl;
//*citer = 78;		//Error

// We cam change which element citer points to , but cannot change underlying element.


//We can also do the reverse i.e define a iterator which is const.
//The underlying element cannot be changed and also the iterator cannot.

const vector<int>::iterator con_iter = ivec.begin();
// con_iter = 50;//Error
// con_iter++;  //Error


/*
Difference of iterator:
When two iterator on same vector are defined: their difference
is a signed itegral type "difference_type"
It represent no of elements between those two iterator

*/

cout << "difference is "<< iterEnd - iterBegin << endl;


/*
Any operation that changes the size of a vector makes existing iterator invalid.
For Example : After caling push_back, we should not rely on the value of an iterator into the vector.

*/
	return 0;
}