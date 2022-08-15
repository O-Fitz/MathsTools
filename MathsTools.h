#pragma once
#include <vector>
#include <assert.h>
#include <math.h>

#define WIN64_LEAN_AND_MEAN
#define PI acos(0.0)

struct Vector2{
    Vector2();
    Vector2(double ix, double iy);
    Vector2(double lst[2]);
    Vector2(std::vector<double> lst);

    Vector2 operator+(const Vector2& v1);
    Vector2 operator-(const Vector2& v1);
    Vector2 operator*(const double& scale);
    Vector2 operator/(const double& scale);
    Vector2 operator+=(const Vector2& v1);
    Vector2 operator-=(const Vector2& v2);
    Vector2 operator*=(const double& scale);
    Vector2 operator/=(const double& scale);
    bool operator==(const Vector2& v1);


    double dotc(const Vector2& v1);
    double abs();
    Vector2 normalise();
    Vector2 getParallelVector(Vector2 vec1);
    Vector2 getPerpendicularVector(Vector2 vec1);

    double x;
    double y;
};


struct Vector3{
    Vector3();
    Vector3(double ix, double iy, double iz);
    Vector3(double lst[3]);
    Vector3(std::vector<double> lst);

    Vector3 operator+(const Vector3& v1);
    Vector3 operator-(const Vector3& v1);
    Vector3 operator*(const double& scale);
    Vector3 operator/(const double& scale);
    Vector3 operator+=(const Vector3& v1);
    Vector3 operator-=(const Vector3& v2);
    Vector3 operator*=(const double& scale);
    Vector3 operator/=(const double& scale);
    bool operator==(const Vector3& v1);

    double dotc(const Vector3& v1);
    Vector3 crossc(const Vector3& v1); // NOTE: Only the 3D vectors have a cross product
    double abs();
    Vector3 normalise();
    Vector3 getParallelVector(Vector3 vec1);
    Vector3 getPerpendicularVector(Vector3 vec1);

    double x;
    double y;
    double z;
};


struct Vector4{
    Vector4();
    Vector4(double ix, double iy, double iz, double iw);
    Vector4(double lst[4]);
    Vector4(std::vector<double> lst);

    Vector4 operator+(const Vector4& v1);
    Vector4 operator-(const Vector4& v1);
    Vector4 operator*(const double& scale);
    Vector4 operator/(const double& scale);
    Vector4 operator+=(const Vector4& v1);
    Vector4 operator-=(const Vector4& v2);
    Vector4 operator*=(const double& scale);
    Vector4 operator/=(const double& scale);
    bool operator==(const Vector4& v1);

    double dotc(const Vector4& v1);
    double abs();
    Vector4 normalise();
    Vector4 getParallelVector(Vector4 vec1);
    Vector4 getPerpendicularVector(Vector4 vec1);

    double x;
    double y;
    double z;
    double w;
};

double dot(Vector2 v1, Vector2 v2);
double dot(Vector3 v1, Vector3 v2);
double dot(Vector4 v1, Vector4 v2);

double getAngle(Vector2 v1, Vector2 v2);
double getAngle(Vector3 v1, Vector3 v2);
double getAngle(Vector4 v1, Vector4 v2);

Vector3 cross(Vector3 v1, Vector3 v2);

Vector2 normaliseV2(Vector2 vec);
Vector3 normaliseV3(Vector3 vec);
Vector4 normaliseV4(Vector4 vec);