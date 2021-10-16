#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <string>

class Vector3D
{
public:
	Vector3D(const float x = 0.0f, const float y = 0.0f, const float z = 0.0f);
	~Vector3D();

	// Accessors
	float GetX() const;
	float GetY() const;
	float GetZ() const;

	// Mutators
	void setX(const float x);
	void setY(const float y);
	void setZ(const float z);
	void set(const float x, const float y, const float z);
	

	std::string ToString() const;



private:
	float m_x;
	float m_y;
	float m_z;
};

#endif/* defined (__VECTOR3D__) */
