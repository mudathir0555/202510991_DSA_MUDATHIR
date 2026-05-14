#include <iostream>
using namespace std;

int main() {
    // 1. Define a sorted array
    int numbers[4] = {1, 2, 4, 6};
    
    // 2. Initialize search boundaries
    int low = 0;          // Starting index
    int high = 3;         // Ending index
    int key = 6;          // The number we are looking for

    // 3. Start the search loop
    while (low <= high) {
        // Calculate the middle index
        int mid = (low + high) / 2;

        // Condition 1: Target found
        if (numbers[mid] == key) {
            cout << key << " is found" << endl;
            break; // Stop searching
        }
        // Condition 2: Target is in the right half
        else if (key > numbers[mid]) {
            low = mid + 1;
        }
        // Condition 3: Target is in the left half
        else {
            high = mid - 1;
        }
    }

    return 0;
}