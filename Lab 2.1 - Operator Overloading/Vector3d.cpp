#include "Vector3d.h"

Vector3d::Vector3d()
{
	for (int i = 0; i < 3; i++)
	{
		vector[i] = 0;
	}
}

Vector3d::Vector3d(double x, double y)
{
	for (int i = 0; i < 3; i++)
	{
		vector[i] = 0;
	}

	vector[0] = x;
	vector[1] = y;
};

Vector3d::Vector3d(double x, double y, double z)
{
	for (int i = 0; i < 3; i++)
	{
		vector[i] = 0;
	}

	vector[0] = x;
	vector[1] = y;
	vector[2] = z;
};

Vector3d::Vector3d(const Vector3d &vct)
{
	vector[0] = vct.vector[0];
	vector[1] = vct.vector[1];
	vector[2] = vct.vector[2];
}

double &Vector3d::operator[](int i)
{
	return vector[i];
}

double Vector3d::operator*(Vector3d vct) const
{
	return (vector[0] * vct[0] + vector[1] * vct[1] + vector[2] * vct[2]);
}

Vector3d operator*(Vector3d vct, int x)
{

	return Vector3d(vct[0] * x, vct[1] * x, vct[2] * x);
}

Vector3d operator*(int x, Vector3d vct)
{

	return Vector3d(vct[0] * x, vct[1] * x, vct[2] * x);
}

std::ostream &operator<<(std::ostream &out, const Vector3d &vct)
{
	std::cout << "[ " << vct.vector[0] << " " << vct.vector[1] << " " << vct.vector[2] << " ]";
}