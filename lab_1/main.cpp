

#include "calcer.hpp"

int main() {

    std::function<double(double)> f = [](double x) {
        return x*x;
    };
    double x = 2;
    double  x0 = 0.2;
    std::unique_ptr<Calcer> calcr = std::make_unique<CalcerLeft>(CalcerLeft(x, x0, f));
    std::unique_ptr<Calcer> calcr2 = std::make_unique<CalcerRight>(CalcerRight(x, x0, f));
    std::unique_ptr<Calcer> calcr3 = std::make_unique<MiddleCalcer>(MiddleCalcer(x, x0, f));

    std::cout<< "derivative = " << calcr->calcDiff() << std::endl;
    std::cout<< "derivative2 = " << calcr2->calcDiff() << std::endl;
    std::cout<< "derivative3 = " << calcr3->calcDiff() << std::endl;
    return 0;
}
