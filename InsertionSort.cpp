#include <iostream>

using namespace std;

void print(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i << " = " << a[i] << endl;
    }
    cout << endl;
}

void insertion_sort(int *a, int n) {
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;

        cout << "Inserindo " << key << " na posicao esperada." << endl;

        while (j >= 0 && a[j] > key) {
            cout << "Comparando " << key << " com " << a[j] << "- Troucou!" << endl;
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;

        print(a, n);
    }
}

int main() {
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = sizeof(v) / sizeof(v[0]);

    print(v, n);
    insertion_sort(v, n);
    print(v, n);
    return 0;
}
