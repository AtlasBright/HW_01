#include <iostream>
#include <locale>
#include <string.h>


int main(){
    int num1, num2;
    std::string text, text2;
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    std::cout << "введите первое  целое число: ";
    std::cin >> num1;
    std::cout << "введите второе целое число:";
    std::cin >> num2;  
    switch (num1) {
        case -100: text = "минус сто"; break;
        case -99: text = "минус девяносто девять"; break;
        case -98: text = "минус девяносто восемь"; break;
        case -97: text = "минус девяносто семь"; break;
        case -96: text = "минус девяносто шесть"; break;
        case -95: text = "минус девяносто пять"; break;
        case -94: text = "минус девяносто четыре"; break;
        case -93: text = "минус девяносто три"; break;
        case -92: text = "минус девяносто два"; break;
        case -91: text = "минус девяносто один"; break;
        case -90: text = "минус девяносто"; break;

        case -80: text = "минус восемьдесят"; break;
        case -70: text = "минус семьдесят"; break;
        case -60: text = "минус шестьдесят"; break;
        case -50: text = "минус пятьдесят"; break;
        case -40: text = "минус сорок"; break;
        case -30: text = "минус тридцать"; break;
        case -20: text = "минус двадцать"; break;

        case -19: text = "минус девятнадцать"; break;
        case -18: text = "минус восемнадцать"; break;
        case -17: text = "минус семнадцать"; break;
        case -16: text = "минус шестнадцать"; break;
        case -15: text = "минус пятнадцать"; break;
        case -14: text = "минус четырнадцать"; break;
        case -13: text = "минус тринадцать"; break;
        case -12: text = "минус двенадцать"; break;
        case -11: text = "минус одиннадцать"; break;
        case -10: text = "минус десять"; break;

        case -9: text = "минус девять"; break;
        case -8: text = "минус восемь"; break;
        case -7: text = "минус семь"; break;
        case -6: text = "минус шесть"; break;
        case -5: text = "минус пять"; break;
        case -4: text = "минус четыре"; break;
        case -3: text = "минус три"; break;
        case -2: text = "минус два"; break;
        case -1: text = "минус один"; break;

        case 0: text = "ноль"; break;

        case 1: text = "один"; break;
        case 2: text = "два"; break;
        case 3: text = "три"; break;
        case 4: text = "четыре"; break;
        case 5: text = "пять"; break;
        case 6: text = "шесть"; break;
        case 7: text = "семь"; break;
        case 8: text = "восемь"; break;
        case 9: text = "девять"; break;

        case 10: text = "десять"; break;
        case 11: text = "одиннадцать"; break;
        case 12: text = "двенадцать"; break;
        case 13: text = "тринадцать"; break;
        case 14: text = "четырнадцать"; break;
        case 15: text = "пятнадцать"; break;
        case 16: text = "шестнадцать"; break;
        case 17: text = "семнадцать"; break;
        case 18: text = "восемнадцать"; break;
        case 19: text = "девятнадцать"; break;

        case 20: text = "двадцать"; break;
        case 30: text = "тридцать"; break;
        case 40: text = "сорок"; break;
        case 50: text = "пятьдесят"; break;
        case 60: text = "шестьдесят"; break;
        case 70: text = "семьдесят"; break;
        case 80: text = "восемьдесят"; break;
        case 90: text = "девяносто"; break;
        case 100: text = "сто"; break;

        default:
            text = "Вне диапазона";
    }
    
    switch (num2) {
        case -100: text2 = "минус сто"; break;
        case -99: text2 = "минус девяносто девять"; break;
        case -98: text2 = "минус девяносто восемь"; break;
        case -97: text2 = "минус девяносто семь"; break;
        case -96: text2 = "минус девяносто шесть"; break;
        case -95: text2 = "минус девяносто пять"; break;
        case -94: text2 = "минус девяносто четыре"; break;
        case -93: text2 = "минус девяносто три"; break;
        case -92: text2 = "минус девяносто два"; break;
        case -91: text2 = "минус девяносто один"; break;
        case -90: text2 = "минус девяносто"; break;

        case -80: text2 = "минус восемьдесят"; break;
        case -70: text2 = "минус семьдесят"; break;
        case -60: text2 = "минус шестьдесят"; break;
        case -50: text2 = "минус пятьдесят"; break;
        case -40: text2 = "минус сорок"; break;
        case -30: text2 = "минус тридцать"; break;
        case -20: text2 = "минус двадцать"; break;

        case -19: text2 = "минус девятнадцать"; break;
        case -18: text2 = "минус восемнадцать"; break;
        case -17: text2 = "минус семнадцать"; break;
        case -16: text2 = "минус шестнадцать"; break;
        case -15: text2 = "минус пятнадцать"; break;
        case -14: text2 = "минус четырнадцать"; break;
        case -13: text2 = "минус тринадцать"; break;
        case -12: text2 = "минус двенадцать"; break;
        case -11: text2 = "минус одиннадцать"; break;
        case -10: text2 = "минус десять"; break;

        case -9: text2 = "минус девять"; break;
        case -8: text2 = "минус восемь"; break;
        case -7: text2 = "минус семь"; break;
        case -6: text2 = "минус шесть"; break;
        case -5: text2 = "минус пять"; break;
        case -4: text2 = "минус четыре"; break;
        case -3: text2 = "минус три"; break;
        case -2: text2 = "минус два"; break;
        case -1: text2 = "минус один"; break;

        case 0: text2 = "ноль"; break;

        case 1: text2 = "один"; break;
        case 2: text2 = "два"; break;
        case 3: text2 = "три"; break;
        case 4: text2 = "четыре"; break;
        case 5: text2 = "пять"; break;
        case 6: text2 = "шесть"; break;
        case 7: text2 = "семь"; break;
        case 8: text2 = "восемь"; break;
        case 9: text2 = "девять"; break;

        case 10: text2 = "десять"; break;
        case 11: text2 = "одиннадцать"; break;
        case 12: text2 = "двенадцать"; break;
        case 13: text2 = "тринадцать"; break;
        case 14: text2 = "четырнадцать"; break;
        case 15: text2 = "пятнадцать"; break;
        case 16: text2 = "шестнадцать"; break;
        case 17: text2 = "семнадцать"; break;
        case 18: text2 = "восемнадцать"; break;
        case 19: text2 = "девятнадцать"; break;

        case 20: text2 = "двадцать"; break;
        case 30: text2 = "тридцать"; break;
        case 40: text2 = "сорок"; break;
        case 50: text2 = "пятьдесят"; break;
        case 60: text2 = "шестьдесят"; break;
        case 70: text2 = "семьдесят"; break;
        case 80: text2 = "восемьдесят"; break;
        case 90: text2 = "девяносто"; break;
        case 100: text2 = "сто"; break;

        default:
            text2 = "Вне диапазона";
    }
    if(num1 > 100 || num2 > 100 || num1 < -100 || num2 < -100){
        std::cout << "Ошибка! Одно из ваших числе вне диапазона";
    }
    else if(num1 > num2){
        std::cout << text << " больше чем " << text2;
    }
    else if (num1 == num2){
         std::cout << text << " равно " << text2;
    }
    else if(num1 < num2) {
         std::cout << text << " меньше чем " << text2;
    }
    

return 0;
}

