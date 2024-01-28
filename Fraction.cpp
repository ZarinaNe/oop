

#include "Fraction.hpp"

Fraction::Fraction(int numerator, int denominator) {
    _numerator = numerator;
    _denominator = denominator;
}

int Fraction::getNum() const {
    return _numerator;
}

int Fraction::getDen() const {
    return _denominator;
}

Fraction Fraction::operator=(Fraction& fraction) {
    return Fraction(fraction.getNum(), fraction.getDen());
}

Fraction Fraction::operator+(Fraction& fraction)  {
    return Fraction(this->getNum()+fraction.getNum(), this->getDen()+fraction.getDen());
}

 Fraction Fraction::operator-(Fraction& fraction)  {
    return Fraction(this->getNum()-fraction.getNum(), this->getDen()-fraction.getDen());
}

Fraction Fraction::operator*(Fraction& fraction) {
    return Fraction(this->getNum()*fraction.getNum(), this->getDen()*fraction.getDen());
}
Fraction Fraction::operator/(Fraction& fraction)  {
    return Fraction(this->getNum()*fraction.getDen(), this->getDen()*fraction.getNum());
}

void Fraction::getDecimal() {
    double decimal;
    decimal = double (_numerator)/ double (_denominator);
    std::cout << "Десятичное представление: " << decimal << std::endl;
}

Fraction createFraction() {
    int num, den;
    std::cout << "Введите числитель и знаменатель дроби через пробел (любой символ для завершения): " << std::endl;
    std::cin >> num >> den;
    if(!std::cin) {
        return {0,0};
    } else {
        Fraction fraction = Fraction(num, den);
        return fraction;
    }
}

void addFractions(std::vector<Fraction>& fractions) {
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Создайте массив дробей для работы с ними!\n" << std::endl;
    while (true) {
        Fraction fraction = createFraction();
        if (fraction.getDen() == 0 && fraction.getNum() == 0) {
            break;
        } else {
            fractions.emplace_back(fraction);
        }

    }
    std::cout << "Введено " << fractions.size() << " дроби(ей): " << std::endl;
    for (int i = 0; i < fractions.size(); i++) {
        std::cout << "Дробь №" << i << " = " << fractions[i].getNum() <<"/"<< fractions[i].getDen() << std::endl;
    }
}
void someCalculations(std::vector<Fraction>& fractions) {
    std::cout << std::endl;
    if (fractions.size() == 2) {
        auto fraction1 = fractions[0] + fractions[1];
        std::cout << "Сумма двух дробей: " << fraction1.getNum() << "/" << fraction1.getDen() << std::endl;
        auto fraction2 = fractions[0] - fractions[1];
        std::cout << "Разность двух дробей: " << fraction2.getNum() << "/" << fraction2.getDen() << std::endl;
        auto fraction3 = fractions[0] * fractions[1];
        std::cout << "Произведение двух дробей: " << fraction3.getNum() << "/" << fraction3.getDen() << std::endl;
        auto fraction4 = fractions[0] / fractions[1];
        std::cout << "Частное двух дробей: " << fraction4.getNum() << "/" << fraction4.getDen() << std::endl;
    } else if (fractions.size() > 2) {
        auto fraction = fractions[0] * fractions[fractions.size()-1];
        std::cout << "Произведение первой и последней дроби: " << fraction.getNum() << "/" << fraction.getDen() << std::endl;
    } else if (fractions.size() == 1) {
        fractions[0].getDecimal();
        auto fraction = fractions[0] * fractions[0] * fractions[0];
        std::cout << "Дробь в кубе: " << fraction.getNum() << "/" << fraction.getDen() << std::endl;
    } else {
        std::cout << "Нет дробей для вычислений" << std::endl;
    }
}
