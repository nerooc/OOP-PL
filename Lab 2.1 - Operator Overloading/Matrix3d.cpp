#include "Matrix3d.h"


Matrix3d::Matrix3d() {

	rows[0] = Vector3d(0, 0, 0);
	rows[1] = Vector3d(0, 0, 0);
	rows[2] = Vector3d(0, 0, 0);

};


Matrix3d::Matrix3d(Vector3d x, Vector3d y,  Vector3d z) {
	rows[0] = x;
	rows[1] = y;
	rows[2] = z;
};

Vector3d Matrix3d::operator*(Vector3d vct) const{
	return  Vector3d(rows[0]*vct, rows[1]*vct, rows[2]*vct);
}

Vector3d& Matrix3d::operator[](int i) {
	return rows[i];
};



std::ostream& operator << (std::ostream& out, const Matrix3d& matrix) {
	std::cout <<  matrix.rows[0] << "\n " << matrix.rows[1] << "\n " << matrix.rows[2] << std::endl;
}