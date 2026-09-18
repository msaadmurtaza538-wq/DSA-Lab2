#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory Location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    // Allocate an integer on the stack
    int iValue;
    iValue = 50;

    cout << "Stack Variable:" << endl;
    analyze_pointer(&iValue);
    cout << endl;

    // Allocate an integer on the heap
    int *pValue = new int;
    *pValue = 100;

    cout << "Heap Variable:" << endl;
    analyze_pointer(pValue);

    delete pValue;

    return 0;
}