#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int passes = 0;

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;
        passes++;

        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    cout << "Sorted: ";

    for (int x : a)
        cout << x << " ";

    cout << "\nPasses: " << passes;

    return 0;
}