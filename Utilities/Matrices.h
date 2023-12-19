#pragma once
#include "Vectors.h"

// Matrix 4x4
class Matrix
{
public:
	//constructors
	Matrix();
	Matrix(GLfloat val);
	Matrix(Matrix& mat);

	// Matrix operations
	Matrix& SetZero();
	Matrix& SetIdentity();

	Matrix& SetRotationX(GLfloat angle);
	Matrix& SetRotationY(GLfloat angle);
	Matrix& SetRotationZ(GLfloat angle);
	Matrix& SetRotationAngleAxis(float angle, float x, float y, float z);

	Matrix& SetScale(GLfloat scale);
	Matrix& SetScale(GLfloat scaleX, GLfloat scaleY, GLfloat scaleZ);
	Matrix& SetScale(GLfloat* pScale);
	Matrix& SetScale(Vector3& scaleVec);

	Matrix& SetTranslation(GLfloat x, GLfloat y, GLfloat z);
	Matrix& SetTranslation(GLfloat* pTrans);
	Matrix& SetTranslation(Vector3& vec);

	Matrix& SetPerspective(GLfloat fovY, GLfloat aspect, GLfloat nearPlane, GLfloat farPlane);

	Matrix Transpose();

	Matrix operator + (Matrix& mat);
	Matrix& operator += (Matrix& mat);
	Matrix operator - (Matrix& mat);
	Matrix& operator -= (Matrix& mat);

	Matrix operator * (Matrix& mat);
	Matrix operator * (GLfloat k);
	Matrix& operator *= (GLfloat k);

	Vector4 operator * (Vector4& vec);

	Matrix& operator = (Matrix& mat);

	//data members
	GLfloat m[4][4];
};

