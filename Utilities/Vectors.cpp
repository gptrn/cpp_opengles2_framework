#include "stdafx.h"
#include "Vectors.h"
#include "Matrices.h"

#include <math.h>

//Vector2

GLfloat Vector2::Length()
{
	return sqrt(x * x + y * y);
}

Vector2& Vector2::Normalize()
{
	GLfloat lenInv = 1.0f / Length();
	x *= lenInv;
	y *= lenInv;

	return *this;
}

Vector2 Vector2::operator + (Vector2& vector)
{
	return Vector2(x + vector.x, y + vector.y);
}

Vector2& Vector2::operator += (Vector2& vector)
{
	x += vector.x;
	y += vector.y;

	return *this;
}

Vector2 Vector2::operator - ()
{
	return Vector2(-x, -y);
}

Vector2 Vector2::operator - (Vector2& vector)
{
	return Vector2(x - vector.x, y - vector.y);
}

Vector2& Vector2::operator -= (Vector2& vector)
{
	x -= vector.x;
	y -= vector.y;

	return *this;
}

Vector2 Vector2::operator * (GLfloat k)
{
	return Vector2(x * k, y * k);
}

Vector2& Vector2::operator *= (GLfloat k)
{
	x *= k;
	y *= k;

	return *this;
}

Vector2 Vector2::operator / (GLfloat k)
{
	GLfloat kInv = 1.0f / k;
	return Vector2(x * kInv, y * kInv);
}

Vector2& Vector2::operator /= (GLfloat k)
{
	return operator *= (1.0f / k);
}

Vector2& Vector2::operator = (Vector2& vector)
{
	x = vector.x;
	y = vector.y;

	return *this;
}

GLfloat Vector2::operator [] (unsigned int idx)
{
	return (&x)[idx];
}

Vector2 Vector2::Modulate(Vector2& vector)
{
	return Vector2(x * vector.x, y * vector.y);
}

GLfloat Vector2::Dot(Vector2& vector)
{
	return x * vector.x + y * vector.y;
}

//Vector3

GLfloat Vector3::Length()
{
	return sqrt(x * x + y * y + z * z);
}

Vector3& Vector3::Normalize()
{
	GLfloat lenInv = 1.0f / Length();
	x *= lenInv;
	y *= lenInv;
	z *= lenInv;

	return *this;
}

Vector3 Vector3::operator + (Vector3& vector)
{
	return Vector3(x + vector.x, y + vector.y, z + vector.z);
}

Vector3& Vector3::operator += (Vector3& vector)
{
	x += vector.x;
	y += vector.y;
	z += vector.z;

	return *this;
}

Vector3 Vector3::operator - ()
{
	return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator - (Vector3& vector)
{
	return Vector3(x - vector.x, y - vector.y, z - vector.z);
}

Vector3& Vector3::operator -= (Vector3& vector)
{
	x -= vector.x;
	y -= vector.y;
	z -= vector.z;

	return *this;
}

Vector3 Vector3::operator * (GLfloat k)
{
	return Vector3(x * k, y * k, z * k);
}

Vector3& Vector3::operator *= (GLfloat k)
{
	x *= k;
	y *= k;
	z *= k;

	return *this;
}

Vector3 Vector3::operator / (GLfloat k)
{
	GLfloat kInv = 1.0f / k;
	return Vector3(x * kInv, y * kInv, z * kInv);
}

Vector3& Vector3::operator /= (GLfloat k)
{
	return operator *= (1.0f / k);
}

Vector3& Vector3::operator = (Vector3& vector)
{
	x = vector.x;
	y = vector.y;
	z = vector.z;

	return *this;
}

GLfloat Vector3::operator [] (unsigned int idx)
{
	return (&x)[idx];
}

Vector3 Vector3::Modulate(Vector3& vector)
{
	return Vector3(x * vector.x, y * vector.y, z * vector.z);
}

GLfloat Vector3::Dot(Vector3& vector)
{
	return x * vector.x + y * vector.y + z * vector.z;
}

Vector3 Vector3::Cross(Vector3& vector)
{
	return Vector3(y * vector.z - z * vector.y, z * vector.x - x * vector.z, x * vector.y - y * vector.x);
}

//Vector4

GLfloat Vector4::Length()
{
	return sqrt(x * x + y * y + z * z + w * w);
}

Vector4& Vector4::Normalize()
{
	GLfloat lenInv = 1.0f / Length();
	x *= lenInv;
	y *= lenInv;
	z *= lenInv;
	w *= lenInv;

	return *this;
}

Vector4 Vector4::operator + (Vector4& vector)
{
	return Vector4(x + vector.x, y + vector.y, z + vector.z, w + vector.w);
}

Vector4& Vector4::operator += (Vector4& vector)
{
	x += vector.x;
	y += vector.y;
	z += vector.z;
	w += vector.w;

	return *this;
}

Vector4 Vector4::operator - ()
{
	return Vector4(-x, -y, -z, -w);
}

Vector4 Vector4::operator - (Vector4& vector)
{
	return Vector4(x - vector.x, y - vector.y, z - vector.z, w - vector.w);
}

Vector4& Vector4::operator -= (Vector4& vector)
{
	x -= vector.x;
	y -= vector.y;
	z -= vector.z;
	w -= vector.w;

	return *this;
}

Vector4 Vector4::operator * (GLfloat k)
{
	return Vector4(x * k, y * k, z * k, w * k);
}

Vector4& Vector4::operator *= (GLfloat k)
{
	x *= k;
	y *= k;
	z *= k;
	w *= k;

	return *this;
}

Vector4 Vector4::operator / (GLfloat k)
{
	GLfloat kInv = 1.0f / k;
	return Vector4(x * kInv, y * kInv, z * kInv, w * kInv);
}

Vector4& Vector4::operator /= (GLfloat k)
{
	return operator *= (1.0f / k);
}

Vector4& Vector4::operator = (Vector4& vector)
{
	x = vector.x;
	y = vector.y;
	z = vector.z;
	w = vector.w;
	return *this;
}

GLfloat Vector4::operator [] (unsigned int idx)
{
	return (&x)[idx];
}

Vector4 Vector4::Modulate(Vector4& vector)
{
	return Vector4(x * vector.x, y * vector.y, z * vector.z, w * vector.w);
}

GLfloat Vector4::Dot(Vector4& vector)
{
	return x * vector.x + y * vector.y + z * vector.z + w * vector.w;
}


Vector4 Vector4::operator * (Matrix& m)
{
	Vector4 res;
	res.x = x * m.m[0][0] + y * m.m[1][0] + z * m.m[2][0] + w * m.m[3][0];
	res.y = x * m.m[0][1] + y * m.m[1][1] + z * m.m[2][1] + w * m.m[3][1];
	res.z = x * m.m[0][2] + y * m.m[1][2] + z * m.m[2][2] + w * m.m[3][2];
	res.w = x * m.m[0][3] + y * m.m[1][3] + z * m.m[2][3] + w * m.m[3][3];

	return res;
}