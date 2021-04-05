#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    cout << "Создание списка";
    int spisok[10];
    for (int i = 0; i < size(spisok); i++)
    {
        spisok[i] = rand() % 21 - 10;
    }
    vector<int> minus;
    vector<int> plus;
    for (int i = 0; i < size(spisok); i++)
    {
        if (spisok[i] < 0)
        {
            minus.push_back(spisok[i]);
        }
        else
            plus.push_back(spisok[i]);
    }
    vector<int>::iterator Iter;
    cout << "Отрицательные:\n";
    for (Iter = minus.begin(); Iter != minus.end(); Iter++)
    {
        cout << *Iter<<endl;
    }
    cout << "\nПоложительные:\n";
    for (Iter = plus.begin(); Iter != plus.end(); Iter++)
    {
        cout << *Iter << endl;
    }
}

