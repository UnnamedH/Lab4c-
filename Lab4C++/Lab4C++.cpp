// Lab4C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void getLengthOfNum(string str) {
    int col = 0;
    for (int i = 0; i < str[i] != 0; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            col++;
        }
    }
    cout << "Количество цифр в данной строке: " << col;
}

void getStrProb(string str){
    for (int i = 0; i < str[i] != 0; i++) {
        if (str[i] == '*') {
            str.insert(i+1," ");
        }
    }
    cout <<endl<< "Полученная строка(с пробелами):" << str;
}

void getNextCode(string str) {
    cout << endl<<"Каждая последующая буква равна следующей по алфавиту: ";
    for (int i = 0; i < str[i] != 0; i++) {
        str[i]++;
        cout<< str[i];
    }
    
}

int main()
{
    setlocale(LC_ALL,"");
    string str = "fb4s2d*b3d*s";
    string str2 = "absregvsrgs";
    //количество цифр в строке
    getLengthOfNum(str);
    //Ставит пробелы после *
    getStrProb(str);
    //Каждая последующая буква равна следующей по алфавиту
    getNextCode(str2);
}




