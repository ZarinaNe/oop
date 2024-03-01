#include <iostream>
#include <functional>

using namespace std;

class ICalc //Определение абстрактного базового класса
{
protected: //Модификатор доступа, делающий поля и методы доступными для классов-наследников, но недоступными извне
    double m_x0, m_step;
    function<double(double)> m_f;

public:
    ICalc(double x0, function<double(double)>f, double step)
    {
        m_x0 = x0;
        m_step = step;
        m_f = move(f);
    }

    double getStep() { return m_step; }

    void setFunc(function<double(double)> f) { m_f = move(f); }

    void setStep(double step) { m_step = step; }

    virtual double Calcdiff() { return 0; }; //Виртуальный метод класса,должен быть переопределен в производных классах.
};
//классы, наследующие ICalc, являются конкретными реализациями метода Calcdiff
class Calcleft : public ICalc
{
public: 
    Calcleft(double x0, function<double(double)>f, double step = 0) : ICalc(x0, f, step) {};

    double Calcdiff() override
    {
        double fl = (m_f(m_x0) - m_f(m_x0 - m_step)) / m_step;
        return fl;
    };
};

class Calcright : public ICalc
{
public:
    Calcright(double x0, function<double(double)>f, double step = 0) : ICalc(x0, f, step) {};

    double Calcdiff() override
    {
        double fr = (m_f(m_x0 + m_step) - m_f(m_x0)) / m_step;
        return fr;
    };
};

class Calcmiddle : public ICalc
{
public:
    Calcmiddle(double x0, function<double(double)>f, double step = 0) : ICalc(x0, f, step) {};

    double Calcdiff() override
    {
        double fc = (m_f(m_x0 + m_step) - m_f(m_x0 - m_step)) / (2 * m_step);
        return fc;
    };
};


function<double(double)>square = [](double x) {
    return x*x;
};

function<double(double)>cube = [](double x) {
    return x * x * x;
};


int main()
{
    setlocale(LC_ALL, "Russian");
    double x0, step = 0;
    cout << "Введите х0" << endl;
    cin >> x0;
    while (step == 0) {
        cout << "Введите шаг, шаг не должен быть равен 0" << endl;
        cin >> step;
    }
    
//создает объект типа Calcright с использованием конструктора инициализаци
//здесь используется функция make_unique, которая выделяет память для объекта типа Calcright на куче и возвращает указатель 
//на этот объект, обернутый в умный указатель unique_ptr 
//auto используется для вывода типа переменной calcr, она принимает возвращаемое значение от make_unique
    auto calcr = make_unique<Calcright>(Calcright(x0, square, step)); 
    auto calcl = make_unique<Calcleft>(Calcleft(x0, square, step));
    auto calcm = make_unique<Calcmiddle>(Calcmiddle(x0, square, step));

    cout << "Для функции х^2:" << endl << "Правая производная: " << calcr->Calcdiff() << endl;
    cout << "Левая производная: " << calcl->Calcdiff() << endl;
    cout << "Средняя производная: " << calcm->Calcdiff() << endl << endl;

//Эта строка вызывает метод setFunc() для объекта, на который указывает умный указатель calcr, чтобы установить новую функцию
//Метод setFunc() задает новую функцию для объекта Calcright. функция cube будет использоваться вместо предыдущей
    calcr->setFunc(cube); //оператор доступа к члену для указателей
    calcl->setFunc(cube);
    calcm->setFunc(cube);

    cout << "Для функции х^3:" << endl << "Правая производная: " << calcr->Calcdiff() << endl;
    cout << "Левая производная: " << calcl->Calcdiff() << endl;
    cout << "Средняя производная: " << calcm->Calcdiff() << endl;
}
