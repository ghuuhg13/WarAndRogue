
#include <iostream>
#include <cstdlib>
using namespace std;


void mainmenu() {
    int x = 0;
    cout << "1: ИГРАТЬ" << endl;
    cout << "2: НАСТРОЙКИ" << endl;
    cout << "3: ВЫХОД" << endl;
    cin >> x;
    switch (x) {
// case game
    case 1:
        break;
//case options
    case 2:
        cout << "1 - главное меню" << endl;
        cout << "2 - пропуск хода" << endl;
        break;
//case exit
    case 3:
        exit(0);
        break;
    default:
        break;
    }
}
int main() {
    system("chcp 1251>nul");
    mainmenu();
    int terr = 0;
    int height = 7;
    int weight = 10;
    string nes = "*";
    int aixodh = 0;
    int aixodw = 0;
    int ter1 = 0;
    int aiterr = 1;
    int aiterrt = 0;
    int youterr = 0;
    int nh = 0, nw = 0;
    int resai = 400;
    int respl = 600;
    string mestnost[7][10];
    int xod = 0;
    for (int h = 0; h < height; h++) {
        cout << endl;
        cout << "_________________________" << endl;
        for (int w = 0; w < weight; w++) {
            terr = 1 + rand() % 3;
            switch (terr)
            {
            case 1:
            case 2:
                mestnost[h][w] = "*";
                cout << "[" << "\033[37m" << mestnost[h][w] << "\033[0m" << "]";
                break;
            case 3:
                mestnost[h][w] = "~";
                cout << "[" << "\033[34m" << mestnost[h][w] << "\033[0m" << "]";
                break;
            default:
                break;
            }


        }

    }
    mestnost[3][0] = "+";
    mestnost[3][9] = "-";
    while (true)
    {
        system("cls");
        cout << "твой ход                     твои ресурсы:" << respl << ".          ресурсы противника:" << resai << endl;
        for (int h = 0; h < height; h++) {
            cout << endl;
            cout << "_________________________" << endl;
            for (int w = 0; w < weight; w++) {
                if (mestnost[h][w] == "~") {
                    cout << "[" << "\033[34m" << mestnost[h][w] << "\033[0m" << "]";
                }
                else {
                    if (mestnost[h][w] == "*") {
                        cout << "[" << "\033[37m" << mestnost[h][w] << "\033[0m" << "]";
                    }
                    else {
                        if (mestnost[h][w] == "+") {
                            cout << "[" << "\033[32m" << mestnost[h][w] << "\033[0m" << "]";
                        }
                        else {
                            if (mestnost[h][w] == "-") {
                                cout << "[" << "\033[31m" << mestnost[h][w] << "\033[0m" << "]";
                            }
                        }
                    }
                }
            }
        }
        cout << endl;
        for (; respl >= 100;) {
        start:
            cin >> xod;
            if (respl < 100) {
                cout << "недостаточно ресурсов для хода" << endl;
            }
            else
            {
                switch (xod)
                {
                case 1:
                    mainmenu();
                    break;
                case 2:
                    goto aixodit;
                case 11:
                    if ((mestnost[1][0] == "+" || mestnost[1][1] == "+" || mestnost[0][1] == "+") && (mestnost[0][0] == "*" || mestnost[0][0] == "-")) {
                        mestnost[0][0] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 110:
                    if ((mestnost[1][9] == "+" || mestnost[1][8] == "+" || mestnost[0][8] == "+") && (mestnost[0][9] == "*" || mestnost[0][9] == "-")) {
                        mestnost[0][9] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 710:
                    if ((mestnost[5][9] == "+" || mestnost[5][8] == "+" || mestnost[6][8] == "+") && (mestnost[6][9] == "*" || mestnost[6][9] == "-")) {
                        mestnost[6][9] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 71:
                    if ((mestnost[5][0] == "+" || mestnost[5][1] == "+" || mestnost[6][1] == "+") && (mestnost[6][0] == "*" || mestnost[6][0] == "-")) {
                        mestnost[6][0] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 61:
                    if ((mestnost[6][0] == "+" || mestnost[6][1] == "+" || mestnost[5][1] == "+" || mestnost[4][1] == "+" || mestnost[4][0] == "+") && (mestnost[5][0] == "*" || mestnost[5][0] == "-")) {
                        mestnost[5][0] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 51:
                    if ((mestnost[5][0] == "+" || mestnost[5][1] == "+" || mestnost[4][1] == "+" || mestnost[3][1] == "+" || mestnost[3][0] == "+") && (mestnost[4][0] == "*" || mestnost[4][0] == "-")) {
                        mestnost[4][0] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 41:
                    if ((mestnost[4][0] == "+" || mestnost[4][1] == "+" || mestnost[3][1] == "+" || mestnost[2][1] == "+" || mestnost[2][0] == "+") && (mestnost[3][0] == "*" || mestnost[3][0] == "-")) {
                        mestnost[3][0] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 31:
                    if ((mestnost[3][0] == "+" || mestnost[3][1] == "+" || mestnost[2][1] == "+" || mestnost[1][1] == "+" || mestnost[1][0] == "+") && (mestnost[2][0] == "*" || mestnost[2][0] == "-")) {
                        mestnost[2][0] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 21:
                    if ((mestnost[2][0] == "+" || mestnost[2][1] == "+" || mestnost[1][1] == "+" || mestnost[0][1] == "+" || mestnost[0][0] == "+") && (mestnost[1][0] == "*" || mestnost[1][0] == "-")) {
                        mestnost[1][0] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 22:
                    if ((mestnost[0][0] == "+" || mestnost[0][1] == "+" || mestnost[0][2] == "+" || mestnost[1][0] == "+" || mestnost[1][2] == "+" || mestnost[2][1] == "+" || mestnost[2][0] == "+" || mestnost[2][2] == "+") && (mestnost[1][1] == "*" || mestnost[1][1] == "-")) {
                        mestnost[1][1] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 32:
                    if ((mestnost[1][0] == "+" || mestnost[1][1] == "+" || mestnost[1][2] == "+" || mestnost[2][0] == "+" || mestnost[2][2] == "+" || mestnost[3][1] == "+" || mestnost[3][0] == "+" || mestnost[3][2] == "+") && (mestnost[2][1] == "*" || mestnost[2][1] == "-")) {
                        mestnost[2][1] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 42:
                    if ((mestnost[2][0] == "+" || mestnost[2][1] == "+" || mestnost[2][2] == "+" || mestnost[3][0] == "+" || mestnost[3][2] == "+" || mestnost[4][1] == "+" || mestnost[4][0] == "+" || mestnost[4][2] == "+") && (mestnost[3][1] == "*" || mestnost[3][1] == "-")) {
                        mestnost[3][1] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий or в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 52:
                    if ((mestnost[3][0] == "+" || mestnost[3][1] == "+" || mestnost[3][2] == "+" || mestnost[4][0] == "+" || mestnost[4][2] == "+" || mestnost[5][1] == "+" || mestnost[5][0] == "+" || mestnost[5][2] == "+") && (mestnost[4][1] == "*" || mestnost[4][1] == "-")) {
                        mestnost[4][1] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 62:
                    if ((mestnost[4][0] == "+" || mestnost[4][1] == "+" || mestnost[4][2] == "+" || mestnost[5][0] == "+" || mestnost[5][2] == "+" || mestnost[6][1] == "+" || mestnost[6][0] == "+" || mestnost[6][2] == "+") && (mestnost[5][1] == "*" || mestnost[5][1] == "-")) {
                        mestnost[5][1] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 23:
                    if ((mestnost[0][1] == "+" || mestnost[0][2] == "+" || mestnost[0][3] == "+" || mestnost[1][1] == "+" || mestnost[1][3] == "+" || mestnost[2][2] == "+" || mestnost[2][1] == "+" || mestnost[2][3] == "+") && (mestnost[1][2] == "*" || mestnost[1][2] == "-")) {
                        mestnost[1][2] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 33:
                    if ((mestnost[1][1] == "+" || mestnost[1][2] == "+" || mestnost[1][3] == "+" || mestnost[2][1] == "+" || mestnost[2][3] == "+" || mestnost[3][2] == "+" || mestnost[3][1] == "+" || mestnost[3][3] == "+") && (mestnost[2][2] == "*" || mestnost[2][2] == "-")) {
                        mestnost[2][2] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 43:
                    if ((mestnost[2][1] == "+" || mestnost[2][2] == "+" || mestnost[2][3] == "+" || mestnost[3][1] == "+" || mestnost[3][3] == "+" || mestnost[4][2] == "+" || mestnost[4][1] == "+" || mestnost[4][3] == "+") && (mestnost[3][2] == "*" || mestnost[3][2] == "-")) {
                        mestnost[3][2] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 53:
                    if ((mestnost[3][1] == "+" || mestnost[3][2] == "+" || mestnost[3][3] == "+" || mestnost[4][1] == "+" || mestnost[4][3] == "+" || mestnost[5][2] == "+" || mestnost[5][1] == "+" || mestnost[5][3] == "+") && (mestnost[4][2] == "*" || mestnost[4][2] == "-")) {
                        mestnost[4][2] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 63:
                    if ((mestnost[4][1] == "+" || mestnost[4][2] == "+" || mestnost[4][3] == "+" || mestnost[5][1] == "+" || mestnost[5][3] == "+" || mestnost[6][2] == "+" || mestnost[6][1] == "+" || mestnost[6][3] == "+") && (mestnost[5][2] == "*" || mestnost[5][2] == "-")) {
                        mestnost[5][2] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 24:
                    if ((mestnost[0][2] == "+" || mestnost[0][3] == "+" || mestnost[0][4] == "+" || mestnost[1][2] == "+" || mestnost[1][4] == "+" || mestnost[2][3] == "+" || mestnost[2][2] == "+" || mestnost[2][4] == "+") && (mestnost[1][3] == "*" || mestnost[1][3] == "-")) {
                        mestnost[1][3] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 34:
                    if ((mestnost[1][2] == "+" || mestnost[1][3] == "+" || mestnost[1][4] == "+" || mestnost[2][2] == "+" || mestnost[2][4] == "+" || mestnost[3][3] == "+" || mestnost[3][2] == "+" || mestnost[3][4] == "+") && (mestnost[2][3] == "*" || mestnost[2][3] == "-")) {
                        mestnost[2][3] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 44:
                    if ((mestnost[2][2] == "+" || mestnost[2][3] == "+" || mestnost[2][4] == "+" || mestnost[3][2] == "+" || mestnost[3][4] == "+" || mestnost[4][3] == "+" || mestnost[4][2] == "+" || mestnost[4][4] == "+") && (mestnost[3][3] == "*" || mestnost[3][3] == "-")) {
                        mestnost[3][3] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 54:
                    if ((mestnost[3][2] == "+" || mestnost[3][3] == "+" || mestnost[3][4] == "+" || mestnost[4][2] == "+" || mestnost[4][4] == "+" || mestnost[5][3] == "+" || mestnost[5][2] == "+" || mestnost[5][4] == "+") && (mestnost[4][3] == "*" || mestnost[4][3] == "-")) {
                        mestnost[4][3] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 64:
                    if ((mestnost[4][2] == "+" || mestnost[4][3] == "+" || mestnost[4][4] == "+" || mestnost[5][2] == "+" || mestnost[5][4] == "+" || mestnost[6][3] == "+" || mestnost[6][2] == "+" || mestnost[6][4] == "+") && (mestnost[5][3] == "*" || mestnost[5][3] == "-")) {
                        mestnost[5][3] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 25:
                    if ((mestnost[0][3] == "+" || mestnost[0][4] == "+" || mestnost[0][5] == "+" || mestnost[1][3] == "+" || mestnost[1][5] == "+" || mestnost[2][4] == "+" || mestnost[2][3] == "+" || mestnost[2][5] == "+") && (mestnost[1][4] == "*" || mestnost[1][4] == "-")) {
                        mestnost[1][4] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 35:
                    if ((mestnost[1][3] == "+" || mestnost[1][4] == "+" || mestnost[1][5] == "+" || mestnost[2][3] == "+" || mestnost[2][5] == "+" || mestnost[3][4] == "+" || mestnost[3][3] == "+" || mestnost[3][5] == "+") && (mestnost[2][4] == "*" || mestnost[2][4] == "-")) {
                        mestnost[2][4] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 45:
                    if ((mestnost[2][3] == "+" || mestnost[2][4] == "+" || mestnost[2][5] == "+" || mestnost[3][3] == "+" || mestnost[3][5] == "+" || mestnost[4][4] == "+" || mestnost[4][3] == "+" || mestnost[4][5] == "+") && (mestnost[3][4] == "*" || mestnost[3][4] == "-")) {
                        mestnost[3][4] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 55:
                    if ((mestnost[3][3] == "+" || mestnost[3][4] == "+" || mestnost[3][5] == "+" || mestnost[4][3] == "+" || mestnost[4][5] == "+" || mestnost[5][4] == "+" || mestnost[5][3] == "+" || mestnost[5][5] == "+") && (mestnost[4][4] == "*" || mestnost[4][4] == "-")) {
                        mestnost[4][4] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 65:
                    if ((mestnost[4][3] == "+" || mestnost[4][4] == "+" || mestnost[4][5] == "+" || mestnost[5][3] == "+" || mestnost[5][5] == "+" || mestnost[6][4] == "+" || mestnost[6][3] == "+" || mestnost[6][5] == "+") && (mestnost[5][4] == "*" || mestnost[5][4] == "-")) {
                        mestnost[5][4] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 26:
                    if ((mestnost[0][4] == "+" || mestnost[0][5] == "+" || mestnost[0][6] == "+" || mestnost[1][4] == "+" || mestnost[1][6] == "+" || mestnost[2][5] == "+" || mestnost[2][4] == "+" || mestnost[2][6] == "+") && (mestnost[1][5] == "*" || mestnost[1][5] == "-")) {
                        mestnost[1][5] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 36:
                    if ((mestnost[1][4] == "+" || mestnost[1][5] == "+" || mestnost[1][6] == "+" || mestnost[2][4] == "+" || mestnost[2][6] == "+" || mestnost[3][5] == "+" || mestnost[3][4] == "+" || mestnost[3][6] == "+") && (mestnost[2][5] == "*" || mestnost[2][5] == "-")) {
                        mestnost[2][5] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 46:
                    if ((mestnost[2][4] == "+" || mestnost[2][5] == "+" || mestnost[2][6] == "+" || mestnost[3][4] == "+" || mestnost[3][6] == "+" || mestnost[4][5] == "+" || mestnost[4][4] == "+" || mestnost[4][6] == "+") && (mestnost[3][5] == "*" || mestnost[3][5] == "-")) {
                        mestnost[3][5] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 56:
                    if ((mestnost[3][4] == "+" || mestnost[3][5] == "+" || mestnost[3][6] == "+" || mestnost[4][4] == "+" || mestnost[4][6] == "+" || mestnost[5][5] == "+" || mestnost[5][4] == "+" || mestnost[5][6] == "+") && (mestnost[4][5] == "*" || mestnost[4][5] == "-")) {
                        mestnost[4][5] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 66:
                    if ((mestnost[4][4] == "+" || mestnost[4][5] == "+" || mestnost[4][6] == "+" || mestnost[5][4] == "+" || mestnost[5][6] == "+" || mestnost[6][5] == "+" || mestnost[6][4] == "+" || mestnost[6][6] == "+") && (mestnost[5][5] == "*" || mestnost[5][5] == "-")) {
                        mestnost[5][5] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 27:
                    if ((mestnost[0][5] == "+" || mestnost[0][6] == "+" || mestnost[0][7] == "+" || mestnost[1][5] == "+" || mestnost[1][7] == "+" || mestnost[2][6] == "+" || mestnost[2][5] == "+" || mestnost[2][7] == "+") && (mestnost[1][6] == "*" || mestnost[1][6] == "-")) {
                        mestnost[1][6] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 37:
                    if ((mestnost[1][5] == "+" || mestnost[1][6] == "+" || mestnost[1][7] == "+" || mestnost[2][5] == "+" || mestnost[2][7] == "+" || mestnost[3][6] == "+" || mestnost[3][5] == "+" || mestnost[3][7] == "+") && (mestnost[2][6] == "*" || mestnost[2][6] == "-")) {
                        mestnost[2][6] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 47:
                    if ((mestnost[2][5] == "+" || mestnost[2][6] == "+" || mestnost[2][7] == "+" || mestnost[3][5] == "+" || mestnost[3][7] == "+" || mestnost[4][6] == "+" || mestnost[4][5] == "+" || mestnost[4][7] == "+") && (mestnost[3][6] == "*" || mestnost[3][6] == "-")) {
                        mestnost[3][6] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 57:
                    if ((mestnost[3][5] == "+" || mestnost[3][6] == "+" || mestnost[3][7] == "+" || mestnost[4][5] == "+" || mestnost[4][7] == "+" || mestnost[5][6] == "+" || mestnost[5][5] == "+" || mestnost[5][7] == "+") && (mestnost[4][6] == "*" || mestnost[4][6] == "-")) {
                        mestnost[4][6] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 67:
                    if ((mestnost[4][5] == "+" || mestnost[4][6] == "+" || mestnost[4][7] == "+" || mestnost[5][5] == "+" || mestnost[5][7] == "+" || mestnost[6][6] == "+" || mestnost[6][5] == "+" || mestnost[6][7] == "+") && (mestnost[5][6] == "*" || mestnost[5][6] == "-")) {
                        mestnost[5][6] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 28:
                    if ((mestnost[0][6] == "+" || mestnost[0][7] == "+" || mestnost[0][8] == "+" || mestnost[1][6] == "+" || mestnost[1][8] == "+" || mestnost[2][7] == "+" || mestnost[2][6] == "+" || mestnost[2][8] == "+") && (mestnost[1][7] == "*" || mestnost[1][7] == "-")) {
                        mestnost[1][7] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 38:
                    if ((mestnost[1][6] == "+" || mestnost[1][7] == "+" || mestnost[1][8] == "+" || mestnost[2][6] == "+" || mestnost[2][8] == "+" || mestnost[3][7] == "+" || mestnost[3][6] == "+" || mestnost[3][8] == "+") && (mestnost[2][7] == "*" || mestnost[2][7] == "-")) {
                        mestnost[2][7] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 48:
                    if ((mestnost[2][6] == "+" || mestnost[2][7] == "+" || mestnost[2][8] == "+" || mestnost[3][6] == "+" || mestnost[3][8] == "+" || mestnost[4][7] == "+" || mestnost[4][6] == "+" || mestnost[4][8] == "+") && (mestnost[3][7] == "*" || mestnost[3][7] == "-")) {
                        mestnost[3][7] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 58:
                    if ((mestnost[3][6] == "+" || mestnost[3][7] == "+" || mestnost[3][8] == "+" || mestnost[4][6] == "+" || mestnost[4][8] == "+" || mestnost[5][7] == "+" || mestnost[5][6] == "+" || mestnost[5][8] == "+") && (mestnost[4][7] == "*" || mestnost[4][7] == "-")) {
                        mestnost[4][7] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 68:
                    if ((mestnost[4][6] == "+" || mestnost[4][7] == "+" || mestnost[4][8] == "+" || mestnost[5][6] == "+" || mestnost[5][8] == "+" || mestnost[6][7] == "+" || mestnost[6][6] == "+" || mestnost[6][8] == "+") && (mestnost[5][7] == "*" || mestnost[5][7] == "-")) {
                        mestnost[5][7] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 29:
                    if ((mestnost[0][7] == "+" || mestnost[0][8] == "+" || mestnost[0][9] == "+" || mestnost[1][7] == "+" || mestnost[1][9] == "+" || mestnost[2][8] == "+" || mestnost[2][7] == "+" || mestnost[2][9] == "+") && (mestnost[1][8] == "*" || mestnost[1][8] == "-")) {
                        mestnost[1][8] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 39:
                    if ((mestnost[1][7] == "+" || mestnost[1][8] == "+" || mestnost[1][9] == "+" || mestnost[2][7] == "+" || mestnost[2][9] == "+" || mestnost[3][8] == "+" || mestnost[3][7] == "+" || mestnost[3][9] == "+") && (mestnost[2][8] == "*" || mestnost[2][8] == "-")) {
                        mestnost[2][8] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 49:
                    if ((mestnost[2][7] == "+" || mestnost[2][8] == "+" || mestnost[2][9] == "+" || mestnost[3][7] == "+" || mestnost[3][9] == "+" || mestnost[4][8] == "+" || mestnost[4][7] == "+" || mestnost[4][9] == "+") && (mestnost[3][8] == "*" || mestnost[3][8] == "-")) {
                        mestnost[3][8] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 59:
                    if ((mestnost[3][7] == "+" || mestnost[3][8] == "+" || mestnost[3][9] == "+" || mestnost[4][7] == "+" || mestnost[4][9] == "+" || mestnost[5][8] == "+" || mestnost[5][7] == "+" || mestnost[5][9] == "+") && (mestnost[4][8] == "*" || mestnost[4][8] == "-")) {
                        mestnost[4][8] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 69:
                    if ((mestnost[4][7] == "+" || mestnost[4][8] == "+" || mestnost[4][9] == "+" || mestnost[5][7] == "+" || mestnost[5][9] == "+" || mestnost[6][8] == "+" || mestnost[6][7] == "+" || mestnost[6][9] == "+") && (mestnost[5][8] == "*" || mestnost[5][8] == "-")) {
                        mestnost[5][8] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 210:
                    if ((mestnost[0][8] == "+" || mestnost[0][9] == "+" || mestnost[1][8] == "+" || mestnost[2][9] == "+" || mestnost[2][8] == "+") && (mestnost[1][9] == "*" || mestnost[1][9] == "-")) {
                        mestnost[1][9] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 310:
                    if ((mestnost[1][8] == "+" || mestnost[1][9] == "+" || mestnost[2][8] == "+" || mestnost[3][9] == "+" || mestnost[3][8] == "+") && (mestnost[2][9] == "*" || mestnost[2][9] == "-")) {
                        mestnost[2][9] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 410:
                    if ((mestnost[2][8] == "+" || mestnost[2][9] == "+" || mestnost[3][8] == "+" || mestnost[4][9] == "+" || mestnost[4][8] == "+" || mestnost[4][10] == "+") && (mestnost[3][9] == "*" || mestnost[3][9] == "-")) {
                        mestnost[3][9] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 510:
                    if ((mestnost[3][8] == "+" || mestnost[3][9] == "+" || mestnost[4][8] == "+" || mestnost[5][9] == "+" || mestnost[5][8] == "+" || mestnost[5][10] == "+") && (mestnost[4][9] == "*" || mestnost[4][9] == "-")) {
                        mestnost[4][9] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 610:
                    if ((mestnost[4][8] == "+" || mestnost[4][9] == "+" || mestnost[5][8] == "+" || mestnost[6][9] == "+" || mestnost[6][8] == "+" || mestnost[6][10] == "+") && (mestnost[5][9] == "*" || mestnost[5][9] == "-")) {
                        mestnost[5][9] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 12:
                    if ((mestnost[0][0] == "+" || mestnost[1][0] == "+" || mestnost[1][1] == "+" || mestnost[1][2] == "+" || mestnost[0][2] == "+") && (mestnost[0][1] == "*" || mestnost[0][1] == "-")) {
                        mestnost[0][1] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 13:
                    if ((mestnost[0][1] == "+" || mestnost[1][1] == "+" || mestnost[1][2] == "+" || mestnost[1][3] == "+" || mestnost[0][3] == "+") && (mestnost[0][2] == "*" || mestnost[0][2] == "-")) {
                        mestnost[0][2] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 14:
                    if ((mestnost[0][2] == "+" || mestnost[1][2] == "+" || mestnost[1][3] == "+" || mestnost[1][4] == "+" || mestnost[0][4] == "+") && (mestnost[0][3] == "*" || mestnost[0][3] == "-")) {
                        mestnost[0][3] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 15:
                    if ((mestnost[0][3] == "+" || mestnost[1][3] == "+" || mestnost[1][4] == "+" || mestnost[1][5] == "+" || mestnost[0][5] == "+") && (mestnost[0][4] == "*" || mestnost[0][4] == "-")) {
                        mestnost[0][4] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 16:
                    if ((mestnost[0][4] == "+" || mestnost[1][4] == "+" || mestnost[1][5] == "+" || mestnost[1][6] == "+" || mestnost[0][6] == "+") && (mestnost[0][5] == "*" || mestnost[0][5] == "-")) {
                        mestnost[0][5] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 17:
                    if ((mestnost[0][5] == "+" || mestnost[1][5] == "+" || mestnost[1][6] == "+" || mestnost[1][7] == "+" || mestnost[0][7] == "+") && (mestnost[0][6] == "*" || mestnost[0][6] == "-")) {
                        mestnost[0][6] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 18:
                    if ((mestnost[0][6] == "+" || mestnost[1][6] == "+" || mestnost[1][7] == "+" || mestnost[1][8] == "+" || mestnost[0][8] == "+") && (mestnost[0][7] == "*" || mestnost[0][7] == "-")) {
                        mestnost[0][7] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 19:
                    if ((mestnost[0][7] == "+" || mestnost[1][7] == "+" || mestnost[1][8] == "+" || mestnost[1][9] == "+" || mestnost[0][9] == "+") && (mestnost[0][8] == "*" || mestnost[0][8] == "-")) {
                        mestnost[0][8] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 72:
                    if ((mestnost[6][0] == "+" || mestnost[5][0] == "+" || mestnost[5][1] == "+" || mestnost[5][2] == "+" || mestnost[6][2] == "+") && (mestnost[6][1] == "*" || mestnost[6][1] == "-")) {
                        mestnost[6][1] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 73:
                    if ((mestnost[6][1] == "+" || mestnost[5][1] == "+" || mestnost[5][2] == "+" || mestnost[5][3] == "+" || mestnost[6][3] == "+") && (mestnost[6][2] == "*" || mestnost[6][2] == "-")) {
                        mestnost[6][2] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 74:
                    if ((mestnost[6][2] == "+" || mestnost[5][2] == "+" || mestnost[5][3] == "+" || mestnost[5][4] == "+" || mestnost[6][4] == "+") && (mestnost[6][3] == "*" || mestnost[6][3] == "-")) {
                        mestnost[6][3] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 75:
                    if ((mestnost[6][3] == "+" || mestnost[5][3] == "+" || mestnost[5][4] == "+" || mestnost[5][5] == "+" || mestnost[6][5] == "+") && (mestnost[6][4] == "*" || mestnost[6][4] == "-")) {
                        mestnost[6][4] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 76:
                    if ((mestnost[6][4] == "+" || mestnost[5][4] == "+" || mestnost[5][5] == "+" || mestnost[5][6] == "+" || mestnost[6][6] == "+") && (mestnost[6][5] == "*" || mestnost[6][5] == "-")) {
                        mestnost[6][5] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 77:
                    if ((mestnost[6][5] == "+" || mestnost[5][5] == "+" || mestnost[5][6] == "+" || mestnost[5][7] == "+" || mestnost[6][7] == "+") && (mestnost[6][6] == "*" || mestnost[6][6] == "-")) {
                        mestnost[6][6] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 78:
                    if ((mestnost[6][6] == "+" || mestnost[5][6] == "+" || mestnost[5][7] == "+" || mestnost[5][8] == "+" || mestnost[6][8] == "+") && (mestnost[6][7] == "*" || mestnost[6][7] == "-")) {
                        mestnost[6][7] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;
                case 79:
                    if ((mestnost[6][7] == "+" || mestnost[5][7] == "+" || mestnost[5][8] == "+" || mestnost[5][9] == "+" || mestnost[6][9] == "+") && (mestnost[6][8] == "*" || mestnost[6][8] == "-")) {
                        mestnost[6][8] = "+";
                    }
                    else {
                        cout << "нет прилегающих территорий или в этой клетке вода" << endl;
                        goto start;
                    }
                    break;

                default:
                    break;
                }
                respl = respl - 100;
                youterr++;
            }
            system("cls");
            cout << "твой ход                     твои ресурсы:" << respl << ".          ресурсы противника:" << resai << endl;
            for (int h = 0; h < height; h++) {
                cout << endl;
                cout << "_________________________" << endl;
                for (int w = 0; w < weight; w++) {
                    if (mestnost[h][w] == "~") {
                        cout << "[" << "\033[34m" << mestnost[h][w] << "\033[0m" << "]";
                    }
                    else {
                        if (mestnost[h][w] == "*") {
                            cout << "[" << "\033[37m" << mestnost[h][w] << "\033[0m" << "]";
                        }
                        else {
                            if (mestnost[h][w] == "+") {
                                cout << "[" << "\033[32m" << mestnost[h][w] << "\033[0m" << "]";
                            }
                            else {
                                if (mestnost[h][w] == "-") {
                                    cout << "[" << "\033[31m" << mestnost[h][w] << "\033[0m" << "]";
                                }
                            }
                        }
                    }
                }
            }
            cout << endl;
        }
        respl = youterr * 50;
        aixodit:
        for (; resai >= 100;) {
            if (resai < 1)
            {
                goto endofaixod;
            }
            else
            {
            aixodf:
                for (int h = 0; h < height; h++) {
                    for (int w = 0; w < weight; w++) {
                        if (aiterrt > aiterr) {
                            aiterrt = 0;
                            goto aixodf;
                        }
                        else
                        {
                            if (mestnost[h][w] == "-") {
                                terr = 1 + rand() % 3;
                                aixodh = -1 + rand() % 3;
                                aixodw = -1 + rand() % 3;
                            prn:
                                if (aixodh == 0 && aixodw == 0) {
                                    aixodh = -1 + rand() % 3;
                                    aixodw = -1 + rand() % 3;
                                    goto prn;
                                }
                                else
                                {
                                    switch (terr)
                                    {
                                    case 1:
                                    case 2:

                                        break;
                                    case 3:

                                        nh = h, nw = w;
                                        while ((nh == h && nw == w) || nh < 0 || nh >= height || nw < 0 || nw >= weight || mestnost[nh][nw] == "~" || mestnost[nh][nw] == "-") {
                                            nh = h + (-1 + rand() % 3);
                                            nw = w + (-1 + rand() % 3);
                                        }
                                        mestnost[nh][nw] = "-";
                                        aiterr++;
                                        resai = resai - 100;
                                        goto endofaixod;
                                        break;


                                    }
                                    aiterrt++;



                                }
                            }
                        }
                    }
                }
            }
        }
        resai = aiterr * 20;
        endofaixod:
        if (aiterr == 0) {
            system("cls");
            cout << "    __" << endl;
            cout << "/ |  | |  |	   / | ||" << endl;
            cout << "/  |__| |__|    ^/  | ||" << endl;
        }
        else
        {

        }
        if (youterr == 0) {
            system("cls");
            cout << "    __             __   _   _" << endl;
            cout << "/ |  | |  |	|  |  | |_  |_" << endl;
            cout << "/  |__| |__|   |_ |__|  _| |_" << endl;
        }
        else
        {

        }
        
    }
return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
