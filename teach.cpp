/*
functions in C++:
P: Make a euclidean distance function in 2D, Pythag theorem
    a^2 + b^2 = c^2.
Q:
1. What is euclidean distance?
    shortest distance between two points in any space.
2. What is meant by 2D?
    2 demensional space - 2 axis of measure.
3. Are units required?
    NO
4. What is a function?
    ?????
5. What is distance?
    measurable space.
6. Who is euclid?
    Math God
7. Why are we doing this? ;)
    to learn what a function is. in C++
8. What is Pythag?
    short for Pythagorus, who was a arithmetician
9. In the equation given, what does it mean?
    a^2 + b^2 = c^2 right triangle, solving for hyp.
10. What a & b & c?
    Integers.

P': We need to create a function that acts on two points
    of a two dimensional graph where the function finds
    the distance between these two points. the graph will
    measured in integer labeled axis. The distance will
    be calc using euclidean distance (2d), pythag. To convert
    points to to distance calc values we use the standard method.

    standard method : (x,y) (x',y') a = |x' - x|, b = |y' - y|

Q: how might we deal with converting points to distance calc values?

checking language:
1. arithmetic
2. group values (arrays)
3. can use functions
*/
#include<iostream>

using std::cout;
using std::endl;

int prac() {
    return 40;
}

int prac_inputs(int n, int m) {
    int r = n*n + m*m;
    return r;
}

int main() {
    int p1[2] = {1,2};
    int p2[2] = {4,3};

    cout << p1[0] << endl;
    cout << prac_inputs(20, 1) << endl;
    return 0;
}