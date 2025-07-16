#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxvalue = arr[0];
    int minvalue = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > maxvalue)
            maxvalue = arr[i];

             if(arr[i] < minvalue)
            minvalue = arr[i];
    }

    cout << "Maximum value: " << maxvalue << endl;
    cout << "Minimum value: " << minvalue << endl;

    return 0;
}

