

#include <iostream>
using namespace std;

void findMinMax(int arr[], int size) {
    int minValue = arr[0], maxValue = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }


    cout << "Minimum value: " << minValue << " at index: " << minIndex << endl;
    cout << "Maximum value: " << maxValue << " at index: " << maxIndex << endl;
}

void Reverse(int arr[], int size) {
    int ind_first = 0;
    int ind_last = size - 1;
    int middle = 0;

    while (ind_first < ind_last) {
        middle = arr[ind_first];
        arr[ind_first] = arr[ind_last];
        arr[ind_last] = middle;
        ind_first++;
        ind_last--;
    }

    cout << "Reversed array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    cout << "==================== task 1 ===================" << endl;
    const int length = 10;
    int arr[length] = {};
    for (int i = 0; i < length;)
    {
        int number = rand() % 10;
        arr[i] = number;
        i++;
    }

    findMinMax(arr, length);

    cout << "Array:" << endl;
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "==================== task 2 ===================" << endl;
    Reverse(arr, length);
}

