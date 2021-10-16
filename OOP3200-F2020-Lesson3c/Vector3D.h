#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <string>

template <class T>
class Vector3D
{
public:
	Vector3D(const T x = static_cast<T>(0.0), const T y = static_cast < T>(0.0), const T z = static_cast < T>(0.0f));
	~Vector3D();

	// Accessors
	T GetX() const;
	T GetY() const;
	T GetZ() const;

	// Mutators
	void setX(const T x);
	void setY(const T y);
	void setZ(const T z);
	void set(const T x, const T y, const T z);

	std::string ToString() const;

private:
	T m_x;
	T m_y;
	T m_z;
};

#endif/* defined (__VECTOR3D__) */
