//Создать шаблонный класс Array3d, который внутри хранит одномерный массив,
//но наружу его выдает как трехмерный.
//Array3d(int dim0, int dim1, int dim2).
//Реализуем методы:
//1) Индлексатор [][][]
//2) Метод GetValues0(int i): (.., .., ..) => (i, .., ..)
//2) Метод GetValues1(in j): (., ..,..) => (.., j, ..)
//3) Аналогично GetValues2
//4) GetValues01(int i, int j): (.., .., ..) => (i, j, ..)
//5) Аналогично GetValues02, GetValues12
//6) Аналогично SertValues0(in i, [][]), SetvLues1, SetvLues2, SetValues01, SetValues02, SetValues12
//7) меоды создания массива с одинаковыми cэлементами np.ons np.zeros np.fill
//        класс шаблонный
#ifndef OOP3_ARRAY3D_HPP
#define OOP3_ARRAY3D_HPP

#include <iostream>
#include <cassert>
#include <any>

namespace array_convertor {

    template<class T, int dim0, int dim1, int dim2>
    struct ArrayWrapper{
        T array[dim0][dim1][dim2];
    };

    template<class T, int dim0, int dim1, int dim2>
    class Array3d {
    private:
        int _dim0, _dim1, _dim2;
        T _array[dim0][dim1][dim2];
    public:

        Array3d() {
            _dim0 = dim0;
            _dim1 = dim1;
            _dim2 = dim2;
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    for (int k = 0; k < dim2; k++) {
                        _array[i][j][k] = 0;
                    }
                }
            }
        };
        Array3d(const T array[dim0][dim1][dim2]){
            _dim0 = dim0;
            _dim1 = dim1;
            _dim2 = dim2;
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    for (int k = 0; k < dim2; k++) {
                        _array[i][j][k] = array[dim0][dim1][dim2];
                    }
                }
            }
        };
        Array3d(const ArrayWrapper<T, dim0, dim1, dim2>& array) {
            _dim0 = dim0;
            _dim1 = dim1;
            _dim2 = dim2;
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    for (int k = 0; k < dim2; k++) {
                        _array[i][j][k] = array.array[dim0][dim1][dim2];
                    }
                }
            }
        };
        // конструктор копирования
        Array3d(const Array3d<T, dim0, dim1, dim2>& array) {
            _dim0 = array._dim0;
            _dim1 = array._dim1;
            _dim2 = array._dim2;
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    for (int k = 0; k < dim2; k++) {
                        _array[i][j][k] = array._array[dim0][dim1][dim2];
                    }
                }
            }
        };

        void ones() {
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    for (int k = 0; k < dim2; k++) {
                        _array[i][j][k] = 1;
                    }
                }
            }
        };
        void zeros() {
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    for (int k = 0; k < dim2; k++) {
                        _array[i][j][k] = 0;
                    }
                }
            }
        };
        void fill() {
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    for (int k = 0; k < dim2; k++) {
                        _array[i][j][k] = rand();
                    }
                }
            }
        };

        void GetValues0(int i) {
            return _array[0][0][i];
        };
        void GetValues1(int i) {
            return _array[1][0][i];
        };
        void GetValues2(int i) {
            return _array[2][0][i];
        };

        int GetValues01(int i, int j) {
            return _array[0][1][i], _array[0][1][j];
        };
        int GetValues02(int i, int j) {
            return _array[0][2][i], _array[0][2][j];
        };
        int GetValues12(int i, int j) {
            return _array[0][1][i], _array[0][2][j];
        };
        void SetValue(int i, int j, int k, int elem) {
            _array[i][j][k] = elem;
        }

        void SetValues0(int i, int pos) {
            _array[0][0][pos] = i;
        };
        void SetValues1(int i, int pos) {
            _array[1][0][pos] = i;
        };
        void SetValues2(int i, int pos) {
            _array[2][0][pos] = i;
        };

        void SetValues01(int i, int pos) {
            _array[0][1][pos] = i;
        };
        void SetValues02(int i, int pos) {
            _array[0][2][pos] = i;
        };
        void SetValues12(int i, int pos) {
            _array[1][2][pos] = i;
        };

        void PrintArr() {
            std::cout << "-------------------------------------" << std::endl;
            for (int i = 0; i < dim0; i++) {
                for (int j = 0; j < dim1; j++) {
                    std::cout << " " <<  j << "|" ;
                    for (int k = 0; k < dim2; k++) {
                        std::cout << _array[i][j][k] << " ";
                    }
                }
                std::cout << std::endl;
            }
        }
    };
    using Mas3d = Array3d<int, 3, 3, 3>;


} // array_convertor

#endif //OOP3_ARRAY3D_HPP
