#include <iostream>
using namespace std;

class character {
  public:
    character() {
      cout << "Bheem is my favourite character." << endl;
    }
};

class actor {
  public:
    actor() {
      cout << "Jr.NTR who played the Bheem character is my favourite actor." << endl;
    }
};

class movie: public character, public actor {};

int main() {
    movie m1;
    return 0;
}
