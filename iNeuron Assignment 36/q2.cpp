/*2. Using STL Array returns the total number of elements in the array.*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int c = 0;
    array<int, 5> a = {1, 2, 3, 4, 5};

    for (auto i = a.begin(); i != a.end(); i++)
    {
        c++;
    }
    cout << "Length of the array is: " << c << endl;
    return 0;
}
/*OUTPUT-
Length of the array is: 5

What does auto do?
The auto keyword in C++ automatically deduces the type of the variable from its initializer. This means that you don't have to explicitly specify the type of the variable; the compiler will infer it based on the expression you assign to it.

In this context:
a.begin() returns an iterator to the first element of the std::array. The type of this iterator is std::array<int, 5>::iterator.
By using auto, the compiler automatically deduces that i is of type std::array<int,5>::iterator, so you don't have to write out this potentially long and complex type.
*/