﻿#include <iostream>
#include <Windows.h>

class Calculator {
private:
    double num1;
    double num2;

public:
    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        return false;
    }

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        return false;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Calculator calc;
    double num1, num2;

    while (true) {
        std::cout << "Введите num1: ";
        std::cin >> num1;

        while (!calc.set_num1(num1)) {
            std::cout << "Неверный ввод!\n";
            std::cout << "Введите num1: ";
            std::cin >> num1;
        }

        std::cout << "Введите num2: ";
        std::cin >> num2;

        while (!calc.set_num2(num2)) {
            std::cout << "Неверный ввод!\n";
            std::cout << "Введите num2: ";
            std::cin >> num2;
        }

        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
    }

    return 0;
}