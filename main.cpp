#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    std::vector<int> data = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int result = binarySearch(data, target);

    // Automated Test Condition
    if (result == 5) {
        std::cout << "Test Passed: Target found at correct index." << std::endl;
        return 0; // Success - Jenkins pipeline continues
    } else {
        std::cerr << "Test Failed: Expected index 5, but got " << result << std::endl;
        return 1; // Failure - Jenkins pipeline will FAIL here!
    }
}
