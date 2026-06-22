#include <iostream>
#include <vector>
using namespace std;
//insertion sort
void insertionSort(vector<int>& arr, int n)
{
    int shift=0;
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];//shifting
            shift++;
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout<<shift<<endl;
}

void printArray(vector<int>& arr, int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    cout<<"Enter Size of array:\n";
    int n;
    cin>>n;
    cout<<"Enter array:\n";
    vector<int> arr(n);
    for(auto& i:arr){
        cin>>i;
    }

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}