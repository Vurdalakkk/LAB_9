#include <stdio.h>
#include <locale.h>

int main() {
    // Русская локаль
    setlocale(LC_CTYPE, "RUS");

    // Инициализация переменных
    int number;
    int count = 0, all_count;
    char a;
    // Цикл для повтора счета
    while (1) {
        // Ввод обрабатываемого числа
        printf("Введите длинное целочисленное значение: ");
        scanf("%d", &number);
        getchar(); 

        all_count = 1;
        // Цикл для перемножения всех цифр числа
        do {
            count = number % 10;
            if (count != 0) {
                all_count *= count;
            }
            number /= 10;
        } while (number > 0);
        // Вывод ответа
        printf("Произведение всех цифр, исключая нули: %d\n", all_count); 
        // Выбор продолжения или остановки программы
        printf("Продолжить? (у - да, n - нет): ");
        scanf("%c", &a);
        getchar(); 

        if (a == 'n') {
            break; 
        }
    }

    return 0;
}
