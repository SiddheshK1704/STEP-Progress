#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//selection sort
void selectionSort(vector<int> &arr) {
    int n = arr.size();
    bool swapped;
    int swapcount=0;
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        swapped=false;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        swap(arr[i], arr[min_idx]);
        swapped = true;
        swapcount++;
        
    }
    cout<<"Swapcount:"<<swapcount<<endl;
}

void printArray(vector<int> &arr) {
    for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    printArray(arr); 

    selectionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}