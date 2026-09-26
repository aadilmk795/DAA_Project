#include<iostream>;
#include<vector>;
using namespace std;

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) 
            arr[j + 1] = arr[j--];
        arr[j + 1] = key;
    }
}

void print(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    insertionSort(arr);
    print(arr);
    return 0;
}