//
//  main.cpp
//  VVP_11
//
//  Created by Роберт Скиталинский on 22.12.2021.
//. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.

#include <iostream>
#include <math.h>
using namespace std;
/*
int main(){
    int a,b,c;
    cout << "Введите число А: ";
    cin >> a;
    cout << "Введите число В: ";
    cin >> b;
    if (a > b){
        c = a;
    }
    else {
        c = b;
    }
    
    if (a == b){
        a = 0;
        b = 0;
    }
    else {
        a = a + c;
        b = b + c;
    }
    cout << a << " " << b;
    return 0;
}

//Даны три числа. Найти сумму двух наибольших из них
int main(){
    int a,b,c,max1,max2;
    cin >> a;
    cin >> b;
    cin >> c;
    max1 = 0;
    max2 = 0;
    if(a > b)
    {
        max1 = a ;
        if(a > c)
            max2 = b ;
        else
            max2 = c ;
    }
    else
    {
        max1 = b ;
        if(a > c)
            max2 = a;
        else
            max2 = c;
 
    }

    cout << max1 + max2;
}
*/
//На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.
int main(){
    int x1,y1,x2,y2,x3,y3,rast21,rast31;
    cout << "Введите X1 и Y1" << endl;
    cin >> x1 >> y1;
    cout << "Введите X2 и Y2" << endl;
    cin >> x2 >> y2;
    cout << "Введите X3 и Y3" << endl;
    cin >> x3 >> y3;
    rast21 = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    rast31 = sqrt(pow(x3 - x1,2) + pow(y3 - y1,2));
    if (rast21 > rast31){
        cout << "Точка С ближе к точке А, чем точка В.";}
    if (rast21 < rast31){
        cout << "Точка B ближе к точке A, чем точка C.";}
    if (rast21 == rast31){
        cout << "Точки равноудалены от А";}
    return 0;
    }
/*
//Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка
int main(){
    int x1,y1;
    cout << "Введите координаты точки А: " << "\n";
    cin >> x1;
    cout << "\n";
    cin >> y1;
    if (x1 > 0 and y1 > 0){
        cout << "Первая четверть";
    }
    if (x1 < 0 and y1 > 0){
        cout << "Вторая четверть";
    }
    if (x1 < 0 and y1 < 0){
        cout << "Третья четверть";
    }
    if (x1 > 0 and y1 < 0){
        cout << "Четвертая четверть" << "\n";
    }
    return 0;
}

//Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.

int main(){
    int x;
    cin >> x;
    if (x < 0 and x % 2 == 0){
        cout << " число отрицательное четное ";
    }
    if (x < 0 and x % 2 != 0){
        cout << "число отрицательное нечетное ";
    }
    if (x > 0 and x % 2 == 0){
        cout << "число положительное четное ";
    }
    if (x > 0 and x % 2 != 0){
        cout << "число положительное нечетное ";
    }
    if (x == 0){
        cout << "нулевое число";
    }
    return 0;
}

//Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.

int main(){
    int c;
    cin >> c;

    bool x = false;
    int count = 0;

    if (c % 2 == 0) {
        x = true;
    }

    while (c > 0) {
        count += 1;
        c /= 10;
    }

    cout << ((count == 3) ? "Трёхзначное " : (count == 2) ? "Двузначное "  : "Однозначно ") << (x ? "чётное " : "нечётное ") << "число " << endl;
}
*/
