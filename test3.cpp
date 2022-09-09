// C++ program to demonstrate constructor overloading
#include <iostream>
using namespace std;
class Classroom {
   private:
    int fans;
    public:
    // 1. Constructor with no arguments
    Classroom() {
        fans = 2;
    }

    // 2. Constructor with an argument
    Classroom(int a) {
        fans = a;
    }

    int getFans() {
        return fans;
    }
};

int main() {
    Classroom classroom1, classroom2(4);

    cout << "Classroom1 Number of Fans = " << classroom1.getFans() << endl;
    cout << "Classroom2 Number of Fans = " << classroom2.getFans() << endl;

    return 0;
}
