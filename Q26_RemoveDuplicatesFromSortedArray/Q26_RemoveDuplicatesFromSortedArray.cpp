#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declare an int, current, as the first index, 0
    // Loop through the nums array starting from position 1 using an int, i
    // Loop only when i < nums.size(), and increment i++
    // In the for loop, compare the elements at index current and index i
    // If element at current is not the same as element at i, set the element at ++current to equal the element
    // at index i
    // else, just continue the loop
    // at the end, return current + 1

    vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

    int current = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[current] != nums[i]) {
            nums[++current] = nums[i];
        }
    }

    if (nums.empty()) {
        cout << "[]" << endl;
    }

    cout << (current + 1) << endl;

    return 0;
}