#include <iostream>
using namespace std;


void degree(int x, int y) // Task1
{
    int sum = x;
    for (int i = 1; i < y; i++)
    {
        sum *= x;
    }
    cout << sum << endl;
}

void sum(int a, int b) //Task2
{
    int sum = 0;
    for (int i = a + 1; i < b; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

int Task3(int n1,int n2) //Task3
{
    for (int i = n1; i < n2; i++)
    {
        int count = 0;
        for (int j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                count += j;
            }
        }
        if (count == i && count)
        {
            cout << count << endl;
        }
    }
    return 0;
}

int Task5(string lucky)
{
    lucky[0] + lucky[1] + lucky[2] == lucky[3] + lucky[4] + lucky[5] ? cout << "yes" : cout << "no";
    return 0;
}

int Task6(int array[],int searchKey,int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == array[searchKey]) 
        {
            cout << "Element of this key was found" << endl;   
        }
    }
    return 0;
}

int main()
{
    /*Task1 Написать функцию, которая принимает два 
     параметра: основание степени и показатель степени, и
     вычисляет степень числа на основе полученных данных.*/
    int x, y;
    cin >> x;
    cin >> y;
    degree(x, y);

    /*Task2 Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел
      из диапазона между ними.*/
    int a, b;
    cin >> a;
    cin >> b;
    sum(a, b);

    /*Task3 Число называется совершенным, если сумма всех его делителей равна ему самому.Напишите функцию
      поиска таких чисел во введенном интервале.*/
    Task3(0, 9000);



    /*Task5 Написать функцию, которая определяет, является ли «счастливым» шестизначное число*/
    string digit;
    cin >> digit; //введите шестизначное число
    if (digit.length() == 6)
    {
        Task5(digit);
    }
    else
        cout << "Unknown digit." << endl;

    /*Task6 Написать функцию, реализующую алгоритм линейного поиска заданного ключа в одномерном массиве.*/
    int searchKey;
    cout << "Please, enter the key:  ";
    cin >> searchKey;
    const int size = 10;
    int array[size] = { 1,2,3,4,5,6,7,8,9,10};
    Task6(array, searchKey, size);

}
