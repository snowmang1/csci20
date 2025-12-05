#include <cstdio>
#include <stack>
#include <vector>

using std::stack;
using std::vector;

/*

building the class A which will print a vector using a stack buffer
in two different methods.

*/

// The class A is for printing a vector using a stack buffer.
class A {
private:
    // buffer stack
    stack<char> st;
public:
    // constructor
    A();

    // loads character vector to be unloaded in st
    void load(vector<char>);

    // prints all contents of stack
    void st_print();

    // obfuscation
    void vec_print(vector<char>);
};