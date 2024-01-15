#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Find
    vector<int> numbers = {1, 2, 3, 4, 5};
    auto it = find(numbers.begin(), numbers.end(), 3);
    if (it != numbers.end()) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Count
    int countThree = count(numbers.begin(), numbers.end(), 3);
    cout << "Count of 3: " << countThree << endl;

    // Equal
    vector<int> another = {1, 2, 3, 4, 5};
    bool isEqual = equal(numbers.begin(), numbers.end(), another.begin());
    cout << "Vectors are " << (isEqual ? "equal" : "not equal") << endl;

    // Search
    auto searchIt = search(numbers.begin(), numbers.end(), another.begin(), another.end());
    if (searchIt != numbers.end()) {
        cout << "Sequence found at index: " << distance(numbers.begin(), searchIt) << endl;
    } else {
        cout << "Sequence not found" << endl;
    }

    // Copy
    vector<int> copyVector;
    copy(numbers.begin(), numbers.end(), back_inserter(copyVector));
    cout << "Copied vector: ";
    for (int num : copyVector) {
        cout << num << " ";
    }
    cout << endl;

    // Swap
    swap(numbers[0], numbers[1]);
    cout << "After swap: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Iterative swap
    iter_swap(numbers.begin(), numbers.begin() + 1);
    cout << "After iterative swap: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Fill
    fill(numbers.begin(), numbers.end(), 0);
    cout << "After fill: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort
    sort(numbers.begin(), numbers.end());
    cout << "After sort: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Merge
    vector<int> mergedVector;
    merge(numbers.begin(), numbers.end(), another.begin(), another.end(), back_inserter(mergedVector));
    cout << "Merged vector: ";
    for (int num : mergedVector) {
        cout << num << " ";
    }
    cout << endl;

    // Accumulate
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of elements: " << sum << endl;

    // For Each
    cout << "Elements after adding 1: ";
    for_each(numbers.begin(), numbers.end(), [](int &num) { num += 1; });
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}