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
    case -100: text="минус сто"; break;
    case -99: text="минус девяносто девять"; break;
    case -98: text="минус девяносто восемь"; break;
    case -97: text="минус девяносто семь"; break;
    case -96: text="минус девяносто шесть"; break;
    case -95: text="минус девяносто пять"; break;
    case -94: text="минус девяносто четыре"; break;
    case -93: text="минус девяносто три"; break;
    case -92: text="минус девяносто два"; break;
    case -91: text="минус девяносто один"; break;
    case -90: text="минус девяносто"; break;

    case -89: text="минус восемьдесят девять"; break;
    case -88: text="минус восемьдесят восемь"; break;
    case -87: text="минус восемьдесят семь"; break;
    case -86: text="минус восемьдесят шесть"; break;
    case -85: text="минус восемьдесят пять"; break;
    case -84: text="минус восемьдесят четыре"; break;
    case -83: text="минус восемьдесят три"; break;
    case -82: text="минус восемьдесят два"; break;
    case -81: text="минус восемьдесят один"; break;
    case -80: text="минус восемьдесят"; break;

    case -79: text="минус семьдесят девять"; break;
    case -78: text="минус семьдесят восемь"; break;
    case -77: text="минус семьдесят семь"; break;
    case -76: text="минус семьдесят шесть"; break;
    case -75: text="минус семьдесят пять"; break;
    case -74: text="минус семьдесят четыре"; break;
    case -73: text="минус семьдесят три"; break;
    case -72: text="минус семьдесят два"; break;
    case -71: text="минус семьдесят один"; break;
    case -70: text="минус семьдесят"; break;

    case -69: text="минус шестьдесят девять"; break;
    case -68: text="минус шестьдесят восемь"; break;
    case -67: text="минус шестьдесят семь"; break;
    case -66: text="минус шестьдесят шесть"; break;
    case -65: text="минус шестьдесят пять"; break;
    case -64: text="минус шестьдесят четыре"; break;
    case -63: text="минус шестьдесят три"; break;
    case -62: text="минус шестьдесят два"; break;
    case -61: text="минус шестьдесят один"; break;
    case -60: text="минус шестьдесят"; break;

    case -59: text="минус пятьдесят девять"; break;
    case -58: text="минус пятьдесят восемь"; break;
    case -57: text="минус пятьдесят семь"; break;
    case -56: text="минус пятьдесят шесть"; break;
    case -55: text="минус пятьдесят пять"; break;
    case -54: text="минус пятьдесят четыре"; break;
    case -53: text="минус пятьдесят три"; break;
    case -52: text="минус пятьдесят два"; break;
    case -51: text="минус пятьдесят один"; break;
    case -50: text="минус пятьдесят"; break;

    case -49: text="минус сорок девять"; break;
    case -48: text="минус сорок восемь"; break;
    case -47: text="минус сорок семь"; break;
    case -46: text="минус сорок шесть"; break;
    case -45: text="минус сорок пять"; break;
    case -44: text="минус сорок четыре"; break;
    case -43: text="минус сорок три"; break;
    case -42: text="минус сорок два"; break;
    case -41: text="минус сорок один"; break;
    case -40: text="минус сорок"; break;

    case -39: text="минус тридцать девять"; break;
    case -38: text="минус тридцать восемь"; break;
    case -37: text="минус тридцать семь"; break;
    case -36: text="минус тридцать шесть"; break;   
    case -35: text="минус тридцать пять"; break;
    case -34: text="минус тридцать четыре"; break;
    case -33: text="минус тридцать три"; break;
    case -32: text="минус тридцать два"; break;
    case -31: text="минус тридцать один"; break;
    case -30: text="минус тридцать"; break;

    case -29: text="минус двадцать девять"; break;
    case -28: text="минус двадцать восемь"; break;
    case -27: text="минус двадцать семь"; break;
    case -26: text="минус двадцать шесть"; break;
    case -25: text="минус двадцать пять"; break;
    case -24: text="минус двадцать четыре"; break;
    case -23: text="минус двадцать три"; break;
    case -22: text="минус двадцать два"; break;
    case -21: text="минус двадцать один"; break;
    case -20: text="минус двадцать"; break;

    case -19: text="минус девятнадцать"; break;
    case -18: text="минус восемнадцать"; break;
    case -17: text="минус семнадцать"; break;
    case -16: text="минус шестнадцать"; break;
    case -15: text="минус пятнадцать"; break;
    case -14: text="минус четырнадцать"; break;
    case -13: text="минус тринадцать"; break;
    case -12: text="минус двенадцать"; break;
    case -11: text="минус одиннадцать"; break;
    case -10: text="минус десять"; break;

    case -9: text="минус девять"; break;
    case -8: text="минус восемь"; break;
    case -7: text="минус семь"; break;
    case -6: text="минус шесть"; break;
    case -5: text="минус пять"; break;
    case -4: text="минус четыре"; break;    
    case -3: text="минус три"; break;
    case -2: text="минус два"; break;
    case -1: text="минус один"; break;
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
    case 21: text = "двадцать один"; break;
    case 22: text = "двадцать два"; break;
    case 23: text = "двадцать три"; break;
    case 24: text = "двадцать четыре"; break;
    case 25: text = "двадцать пять"; break;
    case 26: text = "двадцать шесть"; break;
    case 27: text = "двадцать семь"; break;
case 28: text = "двадцать восемь"; break;
case 29: text = "двадцать девять"; break;

case 30: text = "тридцать"; break;
case 31: text = "тридцать один"; break;
case 32: text = "тридцать два"; break;
case 33: text = "тридцать три"; break;
case 34: text = "тридцать четыре"; break;
case 35: text = "тридцать пять"; break;
case 36: text = "тридцать шесть"; break;
case 37: text = "тридцать семь"; break;
case 38: text = "тридцать восемь"; break;
case 39: text = "тридцать девять"; break;

case 40: text = "сорок"; break;
case 41: text = "сорок один"; break;
case 42: text = "сорок два"; break;
case 43: text = "сорок три"; break;
case 44: text = "сорок четыре"; break;
case 45: text = "сорок пять"; break;
case 46: text = "сорок шесть"; break;
case 47: text = "сорок семь"; break;
case 48: text = "сорок восемь"; break;
case 49: text = "сорок девять"; break;

case 50: text = "пятьдесят"; break;
case 51: text = "пятьдесят один"; break;
case 52: text = "пятьдесят два"; break;
case 53: text = "пятьдесят три"; break;
case 54: text = "пятьдесят четыре"; break;
case 55: text = "пятьдесят пять"; break;
case 56: text = "пятьдесят шесть"; break;
case 57: text = "пятьдесят семь"; break;
case 58: text = "пятьдесят восемь"; break;
case 59: text = "пятьдесят девять"; break;

case 60: text = "шестьдесят"; break;
case 61: text = "шестьдесят один"; break;
case 62: text = "шестьдесят два"; break;
case 63: text = "шестьдесят три"; break;
case 64: text = "шестьдесят четыре"; break;
case 65: text = "шестьдесят пять"; break;
case 66: text = "шестьдесят шесть"; break;
case 67: text = "шестьдесят семь"; break;
case 68: text = "шестьдесят восемь"; break;
case 69: text = "шестьдесят девять"; break;

case 70: text = "семьдесят"; break;
case 71: text = "семьдесят один"; break;
case 72: text = "семьдесят два"; break;
case 73: text = "семьдесят три"; break;
case 74: text = "семьдесят четыре"; break;
case 75: text = "семьдесят пять"; break;
case 76: text = "семьдесят шесть"; break;
case 77: text = "семьдесят семь"; break;
case 78: text = "семьдесят восемь"; break;
case 79: text = "семьдесят девять"; break;

case 80: text = "восемьдесят"; break;
case 81: text = "восемьдесят один"; break;
case 82: text = "восемьдесят два"; break;
case 83: text = "восемьдесят три"; break;
case 84: text = "восемьдесят четыре"; break;
case 85: text = "восемьдесят пять"; break;
case 86: text = "восемьдесят шесть"; break;
case 87: text = "восемьдесят семь"; break;
case 88: text = "восемьдесят восемь"; break;
case 89: text = "восемьдесят девять"; break;

case 90: text = "девяносто"; break;
case 91: text = "девяносто один"; break;
case 92: text = "девяносто два"; break;
case 93: text = "девяносто три"; break;
case 94: text = "девяносто четыре"; break;
case 95: text = "девяносто пять"; break;
case 96: text = "девяносто шесть"; break;
case 97: text = "девяносто семь"; break;
case 98: text = "девяносто восемь"; break;
case 99: text = "девяносто девять"; break;

case 100: text = "сто"; break;
        default:
            text = "Вне диапазона";
    }
    
   switch (num2) {
    case -100: text2="минус сто"; break;
    case -99: text2="минус девяносто девять"; break;
    case -98: text2="минус девяносто восемь"; break;
    case -97: text2="минус девяносто семь"; break;
    case -96: text2="минус девяносто шесть"; break;
    case -95: text2="минус девяносто пять"; break;
    case -94: text2="минус девяносто четыре"; break;
    case -93: text2="минус девяносто три"; break;
    case -92: text2="минус девяносто два"; break;
    case -91: text2="минус девяносто один"; break;
    case -90: text2="минус девяносто"; break;

    case -89: text2="минус восемьдесят девять"; break;
    case -88: text2="минус восемьдесят восемь"; break;
    case -87: text2="минус восемьдесят семь"; break;
    case -86: text2="минус восемьдесят шесть"; break;
    case -85: text2="минус восемьдесят пять"; break;
    case -84: text2="минус восемьдесят четыре"; break;
    case -83: text2="минус восемьдесят три"; break;
    case -82: text2="минус восемьдесят два"; break;
    case -81: text2="минус восемьдесят один"; break;
    case -80: text2="минус восемьдесят"; break;

    case -79: text2="минус семьдесят девять"; break;
    case -78: text2="минус семьдесят восемь"; break;
    case -77: text2="минус семьдесят семь"; break;
    case -76: text2="минус семьдесят шесть"; break;
    case -75: text2="минус семьдесят пять"; break;
    case -74: text2="минус семьдесят четыре"; break;
    case -73: text2="минус семьдесят три"; break;
    case -72: text2="минус семьдесят два"; break;
    case -71: text2="минус семьдесят один"; break;
    case -70: text2="минус семьдесят"; break;

    case -69: text2="минус шестьдесят девять"; break;
    case -68: text2="минус шестьдесят восемь"; break;
    case -67: text2="минус шестьдесят семь"; break;
    case -66: text2="минус шестьдесят шесть"; break;
    case -65: text2="минус шестьдесят пять"; break;
    case -64: text2="минус шестьдесят четыре"; break;
    case -63: text2="минус шестьдесят три"; break;
    case -62: text2="минус шестьдесят два"; break;
    case -61: text2="минус шестьдесят один"; break;
    case -60: text2="минус шестьдесят"; break;

    case -59: text2="минус пятьдесят девять"; break;
    case -58: text2="минус пятьдесят восемь"; break;
    case -57: text2="минус пятьдесят семь"; break;
    case -56: text2="минус пятьдесят шесть"; break;
    case -55: text2="минус пятьдесят пять"; break;
    case -54: text2="минус пятьдесят четыре"; break;
    case -53: text2="минус пятьдесят три"; break;
    case -52: text2="минус пятьдесят два"; break;
    case -51: text2="минус пятьдесят один"; break;
    case -50: text2="минус пятьдесят"; break;

    case -49: text2="минус сорок девять"; break;
    case -48: text2="минус сорок восемь"; break;
    case -47: text2="минус сорок семь"; break;
    case -46: text2="минус сорок шесть"; break;
    case -45: text2="минус сорок пять"; break;
    case -44: text2="минус сорок четыре"; break;
    case -43: text2="минус сорок три"; break;
    case -42: text2="минус сорок два"; break;
    case -41: text2="минус сорок один"; break;
    case -40: text2="минус сорок"; break;

    case -39: text2="минус тридцать девять"; break;
    case -38: text2="минус тридцать восемь"; break;
    case -37: text2="минус тридцать семь"; break;
    case -36: text2="минус тридцать шесть"; break;   
    case -35: text2="минус тридцать пять"; break;
    case -34: text2="минус тридцать четыре"; break;
    case -33: text2="минус тридцать три"; break;
    case -32: text2="минус тридцать два"; break;
    case -31: text2="минус тридцать один"; break;
    case -30: text2="минус тридцать"; break;

    case -29: text2="минус двадцать девять"; break;
    case -28: text2="минус двадцать восемь"; break;
    case -27: text2="минус двадцать семь"; break;
    case -26: text2="минус двадцать шесть"; break;
    case -25: text2="минус двадцать пять"; break;
    case -24: text2="минус двадцать четыре"; break;
    case -23: text2="минус двадцать три"; break;
    case -22: text2="минус двадцать два"; break;
    case -21: text2="минус двадцать один"; break;
    case -20: text2="минус двадцать"; break;

    case -19: text2="минус девятнадцать"; break;
    case -18: text2="минус восемнадцать"; break;
    case -17: text2="минус семнадцать"; break;
    case -16: text2="минус шестнадцать"; break;
    case -15: text2="минус пятнадцать"; break;
    case -14: text2="минус четырнадцать"; break;
    case -13: text2="минус тринадцать"; break;
    case -12: text2="минус двенадцать"; break;
    case -11: text2="минус одиннадцать"; break;
    case -10: text2="минус десять"; break;

    case -9: text2="минус девять"; break;
    case -8: text2="минус восемь"; break;
    case -7: text2="минус семь"; break;
    case -6: text2="минус шесть"; break;
    case -5: text2="минус пять"; break;
    case -4: text2="минус четыре"; break;    
    case -3: text2="минус три"; break;
    case -2: text2="минус два"; break;
    case -1: text2="минус один"; break;
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
    case 21: text2 = "двадцать один"; break;
    case 22: text2 = "двадцать два"; break;
    case 23: text2 = "двадцать три"; break;
    case 24: text2 = "двадцать четыре"; break;
    case 25: text2 = "двадцать пять"; break;
    case 26: text2 = "двадцать шесть"; break;
    case 27: text2 = "двадцать семь"; break;
case 28: text2 = "двадцать восемь"; break;
case 29: text2 = "двадцать девять"; break;

case 30: text2 = "тридцать"; break;
case 31: text2 = "тридцать один"; break;
case 32: text2 = "тридцать два"; break;
case 33: text2 = "тридцать три"; break;
case 34: text2 = "тридцать четыре"; break;
case 35: text2 = "тридцать пять"; break;
case 36: text2 = "тридцать шесть"; break;
case 37: text2 = "тридцать семь"; break;
case 38: text2 = "тридцать восемь"; break;
case 39: text2 = "тридцать девять"; break;

case 40: text2 = "сорок"; break;
case 41: text2 = "сорок один"; break;
case 42: text2 = "сорок два"; break;
case 43: text2 = "сорок три"; break;
case 44: text2 = "сорок четыре"; break;
case 45: text2 = "сорок пять"; break;
case 46: text2 = "сорок шесть"; break;
case 47: text2 = "сорок семь"; break;
case 48: text2 = "сорок восемь"; break;
case 49: text2 = "сорок девять"; break;

case 50: text2 = "пятьдесят"; break;
case 51: text2 = "пятьдесят один"; break;
case 52: text2 = "пятьдесят два"; break;
case 53: text2 = "пятьдесят три"; break;
case 54: text2 = "пятьдесят четыре"; break;
case 55: text2 = "пятьдесят пять"; break;
case 56: text2 = "пятьдесят шесть"; break;
case 57: text2 = "пятьдесят семь"; break;
case 58: text2 = "пятьдесят восемь"; break;
case 59: text2 = "пятьдесят девять"; break;

case 60: text2 = "шестьдесят"; break;
case 61: text2 = "шестьдесят один"; break;
case 62: text2 = "шестьдесят два"; break;
case 63: text2 = "шестьдесят три"; break;
case 64: text2 = "шестьдесят четыре"; break;
case 65: text2 = "шестьдесят пять"; break;
case 66: text2 = "шестьдесят шесть"; break;
case 67: text2 = "шестьдесят семь"; break;
case 68: text2 = "шестьдесят восемь"; break;
case 69: text2 = "шестьдесят девять"; break;

case 70: text2 = "семьдесят"; break;
case 71: text2 = "семьдесят один"; break;
case 72: text2 = "семьдесят два"; break;
case 73: text2 = "семьдесят три"; break;
case 74: text2 = "семьдесят четыре"; break;
case 75: text2 = "семьдесят пять"; break;
case 76: text2 = "семьдесят шесть"; break;
case 77: text2 = "семьдесят семь"; break;
case 78: text2 = "семьдесят восемь"; break;
case 79: text2 = "семьдесят девять"; break;

case 80: text2 = "восемьдесят"; break;
case 81: text2 = "восемьдесят один"; break;
case 82: text2 = "восемьдесят два"; break;
case 83: text2 = "восемьдесят три"; break;
case 84: text2 = "восемьдесят четыре"; break;
case 85: text2 = "восемьдесят пять"; break;
case 86: text2 = "восемьдесят шесть"; break;
case 87: text2 = "восемьдесят семь"; break;
case 88: text2 = "восемьдесят восемь"; break;
case 89: text2 = "восемьдесят девять"; break;

case 90: text2 = "девяносто"; break;
case 91: text2 = "девяносто один"; break;
case 92: text2 = "девяносто два"; break;
case 93: text2 = "девяносто три"; break;
case 94: text2 = "девяносто четыре"; break;
case 95: text2 = "девяносто пять"; break;
case 96: text2 = "девяносто шесть"; break;
case 97: text2 = "девяносто семь"; break;
case 98: text2 = "девяносто восемь"; break;
case 99: text2 = "девяносто девять"; break;

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

