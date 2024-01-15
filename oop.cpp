#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;
void addOne(int &num) {
    num += 1;
}

int main() {
    // Find
    int numbers[] = {1, 2, 3, 4, 5};
    int* it = find(begin(numbers), end(numbers), 3);
    if (it != end(numbers)) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Count
    int countThree = count(begin(numbers), end(numbers), 3);
    cout << "Count of 3: " << countThree << endl;

    // Equal
    int another[] = {1, 2, 3, 4, 5};
    bool isEqual = equal(begin(numbers), end(numbers), begin(another));
    cout << "Arrays are " << (isEqual ? "equal" : "not equal") << endl;

    // Search
    int* searchIt = search(begin(numbers), end(numbers), begin(another), end(another));
    if (searchIt != end(numbers)) {
        cout << "Sequence found at index: " << distance(begin(numbers), searchIt) << endl;
    } else {
        cout << "Sequence not found" << endl;
    }

    // Copy
    int copyArray[5];
    copy(begin(numbers), end(numbers), begin(copyArray));
    cout << "Copied array: ";
    for (int i = 0; i < 5; ++i) {
        cout << copyArray[i] << " ";
    }
    cout << endl;

    // Swap
    swap(numbers[0], numbers[1]);
    cout << "After swap: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Iterative swap
    iter_swap(begin(numbers), begin(numbers) + 1);
    cout << "After iterative swap: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Fill
    fill(begin(numbers), end(numbers), 0);
    cout << "After fill: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Sort
    sort(begin(numbers), end(numbers));
    cout << "After sort: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Merge
    int mergedArray[10];
    merge(begin(numbers), end(numbers), begin(another), end(another), begin(mergedArray));
    cout << "Merged array: ";
    for (int i = 0; i < 10; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    // Accumulate
    int sum = accumulate(begin(numbers), end(numbers), 2);
    cout << "Sum of elements: " << sum << endl;

   
    // For Each using a function
    cout << "Elements after adding 1: ";
    for_each(begin(numbers), end(numbers), addOne);

    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
