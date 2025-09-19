#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person {
private:
    std::string name;
    int age;
    bool pol;
public:
    Person();
    Person(const std::string& n, int old, bool pol1);
    Person(const Person& other);
    ~Person();
    const std::string& getName() const;
    int getAge() const;
    bool getPol() const;
    void setName(const std::string& n);
    void setAge(int old);
    void setPol(bool pol1);
    void printPerson() const;
    void setPerson(const std::string& n, int old, bool pol1);
};
#endif 