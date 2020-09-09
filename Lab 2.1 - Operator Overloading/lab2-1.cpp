
// Prosz� napisa� klas� Vector3d, reprezentuj�c� wektor 3-wymiarowy.
// ma on mo�liwo�� dost�pu do swoich komponent�w przez operator[].

// Prosz� tak�e napisa� klas� Matrix3d, kt�ra reprezentuje macierz.
// Matrix3D sk�ada si� z  Vector3d'�w.
// Domy�lny konstruktor wype�nia je zerami.
// Mo�liwe s� tak�e operacje matematyczne wektor�w i macierzy.

// W Matrix3d mo�liwy jest dost�p do element�w jak w tablicy 2-wymiarowej:
// Matrix3d matrix;
// matrix[i][j] = 10;
// Co trzeba zwr�ci�?

// Uwagi:
// - Prosz� tam gdzie to mo�liwe, unika� copy-paste'a!
// - Jak oszcz�dzi� sobie wysi�ku przy mno�eniu macierzy przez wektor?

// Sko�czone zadanie prosz� spakowa� i wys�a� na UPEL, np.
// tar -czvf lab02.tar.gz lab02

#include <iostream>
#include "Matrix3d.h"
#include "Vector3d.h"

int main() {
    Vector3d v1(3., 1.5, 2.);
    const Vector3d v2(4, 2.);

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "v1 * v2: " << v1 * v2 << std::endl;
    std::cout << std::endl;

    v1[1] = 10;
    std::cout << "Po zmianie v1[2]: " << std::endl;
    std::cout << "v3: " << v1 << std::endl;
    std::cout << "v1 * 2: " << v1 * 2 << std::endl;
    std::cout << "2 * v1: " << 2 * v1 << std::endl;
    std::cout << std::endl;
    
    const Matrix3d m1(v1, v2, v2);
    Matrix3d m2;

    std::cout << "m1: " << std::endl;
    std::cout << m1 << std::endl;
    std::cout << "m2: " << std::endl;
    std::cout << m2 << std::endl;

    
    m2[0][0] = 100;
    std::cout << "Po zmianie m2[0][0]: " << std::endl;
    std::cout << m2 << std::endl;
    
    std::cout << "m1 * v2: " << std::endl;
    std::cout << m1 * v2 << std::endl;
   
}
/* wyniki

v1: [ 3 1.5 2 ]
v2: [ 4 2 0 ]
v1 * v2: 15

Po zmianie v1[2]:
v3: [ 3 10 2 ]
v1 * 2: [ 6 20 4 ]
2 * v1: [ 6 20 4 ]

m1:
[ 3 10 2 ]
[ 4 2 0 ]
[ 4 2 0 ]

m2:
[ 0 0 0 ]
[ 0 0 0 ]
[ 0 0 0 ]

Po zmianie m2[0][0]:
[ 100 0 0 ]
[ 0 0 0 ]
[ 0 0 0 ]

m1 * v2:
[ 32 20 20 ]

*/