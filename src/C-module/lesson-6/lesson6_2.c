/***
Напишите функцию с названием pow. Функция принимает на вход два целых числа: число и степень, в которую нужно возвести это число.

Функция возвращает целое число, которое получилось в результате возведения в степень. Если вычисление невозможно произвести, верните 0. Используйте рекурсию.
 ***/


double pow(double  x, double y ){
    if (y<0) return 0;
    double res = 1;
    for(int i = 0; i<y; i++)
        res*=x;
    return res;
}