#include <iostream>
using namespace std;
class Employee {
    public:
    int id; //data member 
    string name; //data member
    float salary;
    Employee(int id, string name, float salary) {
        this -> id = id;
        this -> name = name;
        this -> salary = salary;
    }
    void display() {
        cout << id << "  " << name << "  " << salary << endl;
    }
};
int main(void) {
    Employee e1 = Employee(101, "Sonoo", 890000); //creating an object       
    Employee e2 = Employee(102, "Nakul", 59000); //creating an object    
    e1.display();
    e2.display();
    return 0;
}