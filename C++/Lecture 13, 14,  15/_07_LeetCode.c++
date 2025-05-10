#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int maxPages) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages) return false; // Book itself is too big

        if (pageSum + arr[i] <= maxPages) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m) return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    if (m > n) return -1; // Not enough books

    int low = 0, high = 0, result = -1;

    // Calculate total pages
    for (int i = 0; i < n; i++) {
        high += arr[i];
        if (arr[i] > low) low = arr[i]; // max single book
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(arr, n, m, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;

    int result = allocateBooks(arr, n, m);
    if (result == -1)
        cout << "Not possible to allocate books." << endl;
    else
        cout << "Minimum of maximum pages: " << result << endl;

    return 0;
}


// Dry Run 
// low = 40   // max(arr)
// high = 100 // sum(arr)
// answer = -1

// Loop 1:
//     mid = (40 + 100) / 2 = 70
//     check isPossible(arr, 4, 2, 70)

//     pageSum = 0
//     studentCount = 1

//     arr[0] = 10 -> pageSum = 10
//     arr[1] = 20 -> pageSum = 30
//     arr[2] = 30 -> pageSum = 60
//     arr[3] = 40 -> pageSum + 40 = 100 > 70
//                  new student → studentCount = 2
//                  pageSum = 40

//     studentCount = 2 ≤ m (possible)
//     → answer = 70
//     → high = 69

// Loop 2:
//     mid = (40 + 69) / 2 = 54
//     check isPossible(arr, 4, 2, 54)

//     pageSum = 0, studentCount = 1

//     arr[0] = 10 → pageSum = 10
//     arr[1] = 20 → pageSum = 30
//     arr[2] = 30 → pageSum + 30 = 60 > 54
//                → studentCount = 2, pageSum = 30
//     arr[3] = 40 → pageSum + 40 = 70 > 54
//                → studentCount = 3 > m (not possible)

//     → low = 55

// Loop 3:
//     mid = (55 + 69) / 2 = 62
//     check isPossible(..., 62)

//     arr[0] = 10 → pageSum = 10
//     arr[1] = 20 → pageSum = 30
//     arr[2] = 30 → pageSum = 60
//     arr[3] = 40 → pageSum + 40 = 100 > 62
//                → studentCount = 2, pageSum = 40

//     → possible
//     → answer = 62
//     → high = 61

// Loop 4:
//     mid = (55 + 61) / 2 = 58
//     isPossible(..., 58)

//     arr[0] = 10 → pageSum = 10
//     arr[1] = 20 → pageSum = 30
//     arr[2] = 30 → pageSum = 60 > 58 → new student
//                → studentCount = 2, pageSum = 30
//     arr[3] = 40 → pageSum = 70 > 58 → studentCount = 3 > m (not possible)

//     → low = 59

// Loop 5:
//     mid = (59 + 61) / 2 = 60
//     isPossible(..., 60)

//     arr[0] = 10 → pageSum = 10
//     arr[1] = 20 → pageSum = 30
//     arr[2] = 30 → pageSum = 60
//     arr[3] = 40 → new student, pageSum = 40 → studentCount = 2

//     → possible
//     → answer = 60
//     → high = 59

// Loop 6:
//     mid = (59 + 59) / 2 = 59
//     isPossible(..., 59)

//     arr[0] = 10 → pageSum = 10
//     arr[1] = 20 → pageSum = 30
//     arr[2] = 30 → pageSum = 60 > 59 → studentCount = 2, pageSum = 30
//     arr[3] = 40 → pageSum = 70 > 59 → studentCount = 3 > m (not possible)

//     → low = 60

// Loop ends (low > high)

// Final Answer = 60
