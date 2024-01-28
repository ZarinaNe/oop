
#include "Array3d.hpp"

int main() {


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

    Arr.SetValues1(777, 2);
    Arr.PrintArr();

    return 0;
}
