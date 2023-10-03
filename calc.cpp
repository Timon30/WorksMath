#include <iostream>

using namespace std;

float calcuteArea(float a);
int calcuteArea(int a);
int calcuteArea(int a, int b);

int main()
{
    float radius;
    int a, b;
    cout << "Podaj promien kola: \n";
    cin >> radius;
    cout << "Podaj dlugosc boku kwadratu: \n";
    cin >> a;
    cout << "Podaj dlugosc pierwszego boku prostokata: \n";
    cin >> a;
    cout << "teraz drugiego boku prostokata: \n";
    cin >> b;

    cout << "Pole kola wynosi: " << calcuteArea(radius) << "\n";
    cout << "Pole kwadratu wynosi: " << calcuteArea(a) << "\n";
    cout << "Pole prostokata wynosi: " << calcuteArea(a, b) << "\n";
    return 0;
}
float calcuteArea(float a)
{
    return 3.14 * a * a;
};
int calcuteArea(int a)
{
    return a * a;
};
int calcuteArea(int a, int b)
{
    return a * b;
};