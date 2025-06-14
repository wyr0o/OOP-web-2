#include <iostream>
#include <string>
#include <Windows.h>
class Counter {
private:
    int value;

public:
    Counter() : value(1) {}
    Counter(int initial_value) : value(initial_value) {}

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string answer;
    int initial_value = 1;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    if (answer == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
    }

    Counter counter(initial_value);

    char command;
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        }
        else if (command == '-') {
            counter.decrement();
        }
        else if (command == '=') {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }

    return 0;
}