#include <iostream>
#include <vector>

// Function to partition the array
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<int> data = {87, 45, 23, 90, 11, 6, 33};
    
    std::cout << "Starting QuickSort build test...\n";
    quickSort(data, 0, data.size() - 1);
    
    // Automated Test Condition: Check if array is sorted
    bool isSorted = true;
    for (size_t i = 0; i < data.size() - 1; i++) {
        if (data[i] > data[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        std::cout << "Hello from Development. Test Passed: QuickSort algorithm worked correctly. Array is sorted!" << std::endl;
        return 0; // Success - Jenkins pipeline continues
    } else {
        std::cerr << "Test Failed: Array is not sorted." << std::endl;
        return 1; // Failure - Jenkins pipeline will FAIL
    }
}
