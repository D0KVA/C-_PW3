#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>
#pragma execution_character_set("utf-8")

using namespace std;

int main() 
{
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 
    
    vector<vector<double>> zvo(3, vector<double>(5));
    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 5; a++) {
            cout << "Введите элемент [" << i+1 << "][" << a+1 << "]: ";
            cin >> zvo[i][a];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        double sum = 0;
        for (int a = 0; a < 5; a++) {
            sum += zvo[i][a];
        }
        double average = sum / 5;
        cout << "Среднее арифметическое строки " << i+1 << ": " << average << endl;
    }
    return 0;
}
