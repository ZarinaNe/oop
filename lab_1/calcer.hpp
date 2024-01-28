#pragma once
#include <iostream>
#include <functional>
#include <memory>
#include <utility>
class Calcer {
private:
public:
    double _x, _x0;
    std::function<double(double)> _f;
    Calcer( double x, double x0, std::function<double(double)> f) {
        _x = x; _x0 = x0; _f = std::move(f);
    };

    virtual double calcDiff()  {
        return 0;
    };
};

class CalcerLeft: public Calcer {
public:
    CalcerLeft(double x, double x0, std::function<double(double)> f) : Calcer(x,  x0,  f) {};
    double calcDiff() override {
        return ((_f(_x+_x0) - _f(_x))/_x0);
    };
};

class CalcerRight: public Calcer {
public:
    CalcerRight(double x, double x0, std::function<double(double)> f) : Calcer(x,  x0,  f) {};

    double calcDiff() override {
        return (_f(_x) - _f(_x+_x0))/_x0;
    };
};

class MiddleCalcer: public Calcer {
public:
    MiddleCalcer(double x, double x0, std::function<double(double)> f) : Calcer(x,  x0,  f) {};
    double calcDiff() override {
        return (_f(_x+_x0) - _f(_x-_x0))/(2*_x0);
    };
};


