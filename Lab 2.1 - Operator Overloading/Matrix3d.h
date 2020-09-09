#pragma once
#include <iostream>
#include "Vector3d.h"


class Matrix3d {
	friend std::ostream& operator << (std::ostream& out, const Matrix3d& matrix);

public:
	Matrix3d();
	Matrix3d(Vector3d, Vector3d, Vector3d);
	Vector3d& operator[](int);
	Vector3d operator*(Vector3d) const;
	

private:
	Vector3d rows[3];
};

std::ostream& operator << (std::ostream& out, const Matrix3d& matrix);