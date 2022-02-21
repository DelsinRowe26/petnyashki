#include <iostream>
using namespace std;

int main() {
    int n, m, c = 0, my_num, sm_num = 0, my_num_two, sm_num_two = 0, b = 0, f = 0, d = 0, e = 0, g = 0, h = 0, k = 0, temp1, temp2;
    cin >> n >> m;
    int a[30][30];

    // обработка
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c++;
            a[i][j] = c;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cin >> my_num >> my_num_two;
    while ((my_num > (m * n)) || (my_num_two > (m * n))) {
        cout << "Vvedite novie chisla";
        cin >> my_num >> my_num_two;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            if (my_num > my_num_two)
            {
                temp1 = my_num;
                temp2 = my_num_two;
                my_num = temp2;
                my_num_two = temp1;
            }
            if (my_num == a[i][j]) {
                //sm_num = a[i][j];
                b = i;
                f = j;
                g++;
            }
            else if (my_num_two == a[i][j]) {
                //sm_num_two = a[i][j];
                d = i;
                e = j;
                h++;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            if (i == b && j == f && g >= 1 && my_num_two > 0 && my_num_two <= m * n && (d - i == 0 || d - i == 1 || d - i == -1) && (e - j == 0 || e - j == 1 || e - j == -1))//индексы первого числа
            {
                a[i][j] = my_num_two;
                k++;
            }
            if (i == d && j == e && h >= 1 && (i - b == 1 || i - b == -1 || i - b == 0) && (j - f == 1 || j - f == -1 || j - f == 0) && k >= 1)//индексы второго числа
            {
                a[i][j] = my_num;
            }
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}