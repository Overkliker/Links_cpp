#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;


int main(){
    SetConsoleCP(1241);
	setlocale(LC_ALL, "Russian");

    int n, m;

    cout << "Input f int: ";
    cin >> n;

    vector<int> mas(n);

    for (int i = 0; i < n; i++){
        cin >> mas[i];
    }

    for (int i = 0; i < n; i++){
        cout << mas[i] << endl;
    }
}