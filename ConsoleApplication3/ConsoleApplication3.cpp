// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//task 1

/*
int main()
{
    int cnt = 0; 
    int sum = 0;
    int arr[14] = { 0 };
    int i;
    for (i = 0; i < 14; i++)
    {
        scanf_s("%d", &arr[i]);
        if ((i % 2 != 0) && (arr[i] >= 0))
        {
            sum += arr[i];
            cnt++;
        }
    }
    printf("\n%d %d", cnt, sum);
}
*/


//task 6
int main() {
    int i;
    float arr[12] = { 0 };
    float max = 0.0f;
    float min = 10*1000000.0f;
    for (i = 0; i = 12; i++) {
        scanf_s("%d", &arr[i]);
        if (arr[i] <= arr[i+1]) {
            max = arr[i + 1];
        }
        if (arr[i] >= arr[i+1]) {
            min = arr[i];
        }
        printf("%f", arr);
    }
}