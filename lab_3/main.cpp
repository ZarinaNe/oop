
#include "Array3d.hpp"

int main() {

//демонстрируем использование класса Array3d из пространства имён array_convertor
    array_convertor::Mas3d Arr(
            {
                    {
                            {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}},
                            {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}},
                            {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}
                    }
            }
    );

    Arr.fill();
    Arr.PrintArr();

    Arr.SetValues1(777, 2); //[1][0][2]
    Arr.PrintArr();

    return 0;
}
