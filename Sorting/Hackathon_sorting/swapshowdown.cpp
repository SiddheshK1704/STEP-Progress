#include <iostream>
#include <vector>
using namespace std;

int bubble(vector<int> a) {

    int swaps = 0;

    int n = a.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swaps++;
            }
        }
    }

    return swaps;
}

int selection(vector<int> a) {

    int swaps = 0;

    int n = a.size();

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {

            if (a[j] < a[minIndex])
                minIndex = j;
        }

        if (minIndex != i) {
            swap(a[i], a[minIndex]);
            swaps++;
        }
    }

    return swaps;
}

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Bubble Swaps: " << bubble(a) << endl;
    cout << "Selection Swaps: " << selection(a);

    return 0;
}