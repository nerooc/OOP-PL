#pragma once
#include <iostream>

class Vector3d
{
	friend std::ostream &operator<<(std::ostream &out, const Vector3d &vct);
	friend class Matrix3d;

public:
	Vector3d();
	Vector3d(double, double);
	Vector3d(double, double, double);
	Vector3d(const Vector3d &vct);
	double &operator[](int);
	double operator*(Vector3d) const;

private:
	double vector[3];
};

Vector3d operator*(Vector3d, int);
Vector3d operator*(int, Vector3d);
std::ostream &operator<<(std::ostream &out, const Vector3d &vct);