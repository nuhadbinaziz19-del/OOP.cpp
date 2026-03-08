#include <iostream>
using namespace std;

namespace Student {
    void info() {
        cout << "This is the Student namespace." << endl;
    }
}

namespace Teacher {
    void info() {
        cout << "This is the Teacher namespace." << endl;
    }
}

int main() {
    Student::info(); 
    Teacher::info(); 
    return 0;
}


