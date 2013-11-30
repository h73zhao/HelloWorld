#include <iostream>

using namespace std;

void print() {
    for (int i = 0; i < 10; i++)
        cout << "Hello world" << endl;
    return 0;
}



int main(int argc, char** argv) {
    int flag = 1;
    cout << "This is in trail branch..." << endl;
    cout << "Hello world" << endl;
    cout << "This is in master branch..." << endl;
    return 0;
}
