#include <iostream>
#include <cassert>

using namespace std;

void testSortedArray()
{
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testUnsortedArray()
{
    int arr[] = {1, 4, 3, 5, 6};
    bool result = isSorted(arr, 5);
    assert(result == false);
}

void testDuplicateValues()
{
    int arr[] = {1, 2, 2, 3, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testSingleElement()
{
    int arr[] = {10};
    bool result = isSorted(arr, 1);
    assert(result == true);
}

void testDescendingArray()
{
    int arr[] = {5, 4, 3, 2, 1};
    bool result = isSorted(arr, 5);
    assert(result == false);
}

void testNegativeValues()
{
    int arr[] = {-5, -3, -1, 0, 2};
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testEmptyArray()
{
    bool result = isSorted(nullptr, 0);
    assert(result == true);
}

void testAllEqual()
{
    int arr[] = {5, 5, 5, 5};
    bool result = isSorted(arr, 4);
    assert(result == true);
}

int main()
{
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqual();

    cout << "All tests passed!" << endl;

    return 0;
}
