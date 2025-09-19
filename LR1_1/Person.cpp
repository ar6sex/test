#include "Person.h"
#include <iostream>
using namespace std;
Person::Person() : name(""), age(0), pol(false)
{
    cout << "Викликано конструктор без параметрів " << this << endl;
}
Person::Person(const std::string& n, int old, bool pol1) : name(n), age(old), pol(pol1)
{
    cout << "Викликано конструктор з параметрами " << this << endl;
}
Person::Person(const Person& other) : name(other.name), age(other.age), pol(other.pol)
{
    cout << "Викликано конструктор копіювання " << this << endl;
}
Person::~Person()
{
    cout << "Викликано деструктор " << this << endl;
}
const std::string& Person::getName() const 
{
    return name;
}
int Person::getAge() const
{
    return age;
}
bool Person::getPol() const
{
    return pol;
}
void Person::setName(const std::string& n)
{
    name = n;
}
void Person::setAge(int old)
{
    age = old;
}
void Person::setPol(bool pol1)
{
    pol = pol1;
}
void Person::printPerson() const
{
    const char* polStr = pol ? "men" : "women";
    cout << "Name: " << name << "\t age: " << age << "\t pol: " << polStr << endl;
}
void Person::setPerson(const std::string& n, int old, bool pol1)
{
    name = n;
    age = old;
    pol = pol1;
    const char* polStr = pol ? "men" : "women";
    cout << "Name: " << name << "\t age: " << age << "\t pol: " << polStr << endl;
}