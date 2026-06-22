#include <iostream>
#include <vector>
using namespace std;

//bubble sort
void BubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    int swapcount = 0;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                swapcount++;
            }
        }

        if (!swapped)
            break;
    }

    cout << "Swap Count: " << swapcount << '\n';
}

void PrintArr(const vector<int>& arr) {
    for (int x : arr)
        cout << x << " ";
    cout << '\n';
}

int main() {
    cout << "Enter the number of elements in your array:\n";

    int n;
    cin >> n;

    cout << "Enter your array:\n";

    vector<int> arr(n);

    for (auto& x : arr)
        cin >> x;
        
    cout<<"Sorted Array:\n";

    BubbleSort(arr);
    PrintArr(arr);

    return 0;
}