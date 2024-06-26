#include <iostream>
#include <string>

class Person {
public:
    virtual void work() {
        std::cout << "Person is working" << std::endl;
    }
};

class Employee : public Person {
public:
    void work() override {
        std::cout << "Employee is working" << std::endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        std::cout << "Manager is working" << std::endl;
    }
};

int main() {
    Person person;
    Employee employee;
    Manager manager;

    person.work();  
    employee.work(); 
    manager.work(); 

    return 0;
}
