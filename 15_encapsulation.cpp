#include <iostream>
using namespace std;

class Student {
private:
    string name;      
    int rollNumber;

protected:
    float marks;     

public:
  
    void setData(string n, int roll, float m) {
        name = n;
        rollNumber = roll;
        marks = m;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setData("Asif", 032, 88.5);
    s1.displayData();

    return 0;
}

