#include "Person.h"
#include <iostream>
int main() {
    setlocale(LC_ALL, "");
    Person p1;
    p1.printPerson();
    Person p2("Ivan", 25, true);
    p2.printPerson();
    Person p3 = p2;
    p3.setName("Petro");
    p3.setAge(30);
    p3.setPol(false);
    p3.printPerson();
    p2.setPerson("Oleksii", 40, true);
    std::cout << "p2 name from getter: " << p2.getName() << std::endl;
}