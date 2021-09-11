#include <iostream>
using namespace std;
void matrix1();
void matrix7();
void matrix9();
void matrix8();
void matrix11();
int main() {
    matrix8();
}
void matrix1() {
    int m;
    int n;
    int counter = 1;
    cout << "Enter the amount of rows M:";
    cin >> m;
    cout << "Enter the amount of columns N:";
    cin >> n;
    int** arr = new int* [m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = counter * 10;
        }
        counter++;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}
void matrix7() {
    int m;
    int n;
    int k;
    cout << "Enter the amount of rows M:";
    cin >> m;
    cout << "Enter the amount of columns N:";
    cin >> n;
    cout << "Enter the number of the row to output:";
    cin >> k;
    int** arr = new int* [m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++) {
        cout << arr[k + 1][j] << "\t";
    }
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}
void matrix8() {
    int m;
    int n;
    int k;
    cout << "Enter the amount of rows M:";
    cin >> m;
    cout << "Enter the amount of columns N:";
    cin >> n;
    cout << "Enter the number of the column to output:";
    cin >> k;
    int** arr = new int* [m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int j = 0; j < m; j++) {
        cout << arr[j][k - 1] << "\t";
    }
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}
void matrix9() {
    int m;
    int n;
    cout << "Enter the amount of rows M:";
    cin >> m;
    cout << "Enter the amount of columns N:";
    cin >> n;
    int** arr = new int* [m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20;
        }
    }
    for (int i = 0; i < m; i += 2) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}
void matrix11() {
    int m;
    int n;
    cout << "Enter the amount of rows M:";
    cin >> m;
    cout << "Enter the amount of columns N:";
    cin >> n;
    int** arr = new int* [m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < m; i += 2) {
        for (int j = n; j > 0; j--) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

