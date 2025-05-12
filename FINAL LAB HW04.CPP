#include <iostream>
using namespace std;
 int ROWS = 2;
 int COLS = 2;
int main() {
    char arr[ROWS][COLS];
   for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter a character: ";
            cin >> arr[i][j];

            if (arr[i][j] == '@' || arr[i][j] == '#' || arr[i][j] == '$' || arr[i][j] == '%') {
                cout << "Invalid Input" << endl;
                j--;
            }
        }
    }


    cout << "Array contents:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


}

