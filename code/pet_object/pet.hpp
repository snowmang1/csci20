#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;
/* boundary:
- pets larger than 2100 metric tons
- pet eats more than 2100 metric tons / week
- name > 10 character
*/
class Pet {
private:
    int size; // weight in grams
    string name; // name = 10 characters
    int food; // kg food per week
public:
    bool sameSizePet(Pet a, Pet b);
    bool sameNamePet(Pet a, Pet b);
    Pet();
    Pet(int s, int f, string n);
};

Pet::Pet() { // default
    size = 0;
    food = 0;
    name = "";
}

Pet::Pet(int s, int f, string n) {
    size = s;
    food = f;
    name = n;
}