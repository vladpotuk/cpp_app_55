#include <iostream>
#include "Func.h"
#include<Windows.h>

using namespace std;

//Домашка
int main() {
    system("chcp 1251");
    system("csl");
    int choice;
    // Додаємо логіку для вибору операції
    cout << "Введіть номер операції:\n";
    cout << "1. Розрахувати ступінь числа: \n";
    cout << "2. Розрахувати суму в діапазоні: \n";
    cout << "3. Знайти досконале число: \n";
    cout << "4. Намалювати карту\n";
    cout << "5. Перевірити на щасливе число: \n";
    cin >> choice;

    switch (choice) {
    case 1: {
        // Для функції power
        //Написати функцію, яка приймає два параметри: основу степеня та показник степеня і обчислює ступінь числа на основі отриманих даних.
        int base, exponent;
        cout << "Enter base and exponent: ";
        cin >> base >> exponent;
        int result = power(base, exponent);
        cout << "Result: " << result << endl;
        break;
    }
    case 2: {
        // Для функції sumInRange
        //Написати функцію, яка отримує як параметри 2 цілих числа і повертає суму чисел з діапазону між ними.
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int sum = sumInRange(num1, num2);
        cout << "Sum: " << sum << endl;
        break;
    }
    case 3: {
        // Для функції findPerfectNumbersInRange
        //Число називається досконалим, якщо сума всіх його дільників дорівнює йому самому. Напишіть функцію пошуку таких чисел у введеному інтервалі.
        int start, end;
        cout << "Enter start and end numbers: ";
        cin >> start >> end;
        findPerfectNumbersInRange(start, end);
        break;
    }
    case 4: {
        // Для функції printCard
        //Напишіть функцію, що виводить на екран передану їй гральну карту.
        int card;
        cout << "Enter a card number: ";
        cin >> card;
        printCard(card);
        break;
    }
    case 5: {
        // Для функції isLuckyNumber
        //Напишіть функцію, яка визначає, чи є "щасливим" шестизначне число.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        bool isLucky = isLuckyNumber(number);
        if (isLucky) {
            cout << number << " is a lucky number" << endl;
        }
        else {
            cout << number << " is not a lucky number" << endl;
        }
        break;
    }
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}

int main() {
    system("chcp 1251");
    system("csl");
    int choice;
    cout << "Введіть номер завдання:\n";
    cout << "1. Намалювати прямокутник\n";
    cout << "2. Розрахувати факторіал\n";
    cout << "3. Перевірка простого числа: \n";
    cout << "4. Порахувати куб числа : \n";
    cout << "5. Знайти більше з двох чисел\n";
    cout << "6. Перевірити число на істину \n";
    cin >> choice;

    switch (choice) {
    case 1: {
        //Написати функцію, що виводить на екран прямокутник з висотою N і шириною K.
        int height, width;
        cout << "Enter height and width of the rectangle: ";
        cin >> height >> width;
        printRectangle(height, width);
        break;
    }
    case 2: {
        //Написати функцію, яка обчислює факторіал переданого їй числа.
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int factorial = calculateFactorial(n);
        cout << "Factorial: " << factorial << endl;
        break;
    }
    case 3: {
        //Написати функцію, яка перевіряє, чи є передане їй число простим. Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        bool isPrime = checkPrimeNumber(number);
        if (isPrime) {
            cout << number << " is a prime number" << endl;
        }
        else {
            cout << number << " is not a prime number" << endl;
        }
        break;
    }
    case 4: {
        //Напишіть функцію, яка повертає куб числа.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        int cube = calculateCube(number);
        cout << "Cube: " << cube << endl;
        break;
    }
    case 5: {
        //Написати функцію для знаходження найбільшого з двох чисел.
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int larger = findLargerNumber(num1, num2);
        cout << "Larger number: " << larger << endl;
        break;
    }
    case 6: {
        //Напишіть функцію, яка повертає істину, якщо передане значення додатне і хибу, якщо від'ємне.
        int number;
        cout << "Enter a number: ";
        cin >> number;
        bool isPositive = isPositiveNumber(number);
        if (isPositive) {
            cout << number << " is a positive number" << endl;
        }
        else {
            cout << number << " is not a positive number" << endl;
        }
        break;
    }
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;

}
