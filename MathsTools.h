#pragma once
#include <vector>
#include <assert.h>
#include <math.h>

#define WIN64_LEAN_AND_MEAN
#define PI acos(0.0)

struct Vector2{
    Vector2();
    Vector2(float ix, float iy);
    Vector2(float lst[2]);
    Vector2(std::vector<float> lst);

    Vector2 operator+(const Vector2& v1);
    Vector2 operator-(const Vector2& v1);
    Vector2 operator*(const float& scale);
    Vector2 operator/(const float& scale);
    Vector2 operator+=(const Vector2& v1);
    Vector2 operator-=(const Vector2& v2);
    Vector2 operator*=(const float& scale);
    Vector2 operator/=(const float& scale);
    bool operator==(const Vector2& v1);


    float dotc(const Vector2& v1);
    float abs();
    Vector2 normalise();
    Vector2 getParallelVector(Vector2 vec1);
    Vector2 getPerpendicularVector(Vector2 vec1);

    float x;
    float y;
};


struct Vector3{
    Vector3();
    Vector3(float ix, float iy, float iz);
    Vector3(float lst[3]);
    Vector3(std::vector<float> lst);

    Vector3 operator+(const Vector3& v1);
    Vector3 operator-(const Vector3& v1);
    Vector3 operator*(const float& scale);
    Vector3 operator/(const float& scale);
    Vector3 operator+=(const Vector3& v1);
    Vector3 operator-=(const Vector3& v2);
    Vector3 operator*=(const float& scale);
    Vector3 operator/=(const float& scale);
    bool operator==(const Vector3& v1);

    float dotc(const Vector3& v1);
    Vector3 crossc(const Vector3& v1); // NOTE: Only the 3D vectors have a cross product
    float abs();
    Vector3 normalise();
    Vector3 getParallelVector(Vector3 vec1);
    Vector3 getPerpendicularVector(Vector3 vec1);

    float x;
    float y;
    float z;
};


struct Vector4{
    Vector4();
    Vector4(float ix, float iy, float iz, float iw);
    Vector4(float lst[4]);
    Vector4(std::vector<float> lst);

    Vector4 operator+(const Vector4& v1);
    Vector4 operator-(const Vector4& v1);
    Vector4 operator*(const float& scale);
    Vector4 operator/(const float& scale);
    Vector4 operator+=(const Vector4& v1);
    Vector4 operator-=(const Vector4& v2);
    Vector4 operator*=(const float& scale);
    Vector4 operator/=(const float& scale);
    bool operator==(const Vector4& v1);

    float dotc(const Vector4& v1);
    float abs();
    Vector4 normalise();
    Vector4 getParallelVector(Vector4 vec1);
    Vector4 getPerpendicularVector(Vector4 vec1);

    float x;
    float y;
    float z;
    float w;
};

float dot(Vector2 v1, Vector2 v2);
float dot(Vector3 v1, Vector3 v2);
float dot(Vector4 v1, Vector4 v2);

float getAngle(Vector2 v1, Vector2 v2);
float getAngle(Vector3 v1, Vector3 v2);
float getAngle(Vector4 v1, Vector4 v2);

Vector3 cross(Vector3 v1, Vector3 v2);

Vector2 normaliseV2(Vector2 vec);
Vector3 normaliseV3(Vector3 vec);
Vector4 normaliseV4(Vector4 vec);