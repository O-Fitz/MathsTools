#include "MathsTools.h"
//#include "pch.h"

// 2D VECTOR

Vector2::Vector2() {
    x = 0;
    y = 0;
}

Vector2::Vector2(double ix, double iy) {
    x = ix;
    y = iy;
}

Vector2::Vector2(double lst[2]) {
    x = lst[0];
    y = lst[1];
}

Vector2::Vector2(std::vector<double> lst) {
    assert(lst.size() == 2);
    x = lst[0];
    y = lst[1];
}

Vector2 Vector2::operator+(const Vector2& v1) {
    Vector2 result;
    result.x = v1.x + x;
    result.y = v1.y + y;
    return result;
}

Vector2 Vector2::operator-(const Vector2& v1) {
    Vector2 result;
    result.x = x - v1.x;
    result.y = y - v1.y;
    return result;
}

Vector2 Vector2::operator*(const double& scale) {
    Vector2 result;
    result.x = x * scale;
    result.y = y * scale;
    return result;
}

Vector2 Vector2::operator/(const double& scale) {
    return Vector2(x, y) * (1 / scale);
}

Vector2 Vector2::operator+=(const Vector2& v1) {
    Vector2 result = Vector2(x, y) + v1;
    x = result.x;
    y = result.y;
    return result;
}

Vector2 Vector2::operator-=(const Vector2& v1) {
    Vector2 result = Vector2(x, y) - v1;
    x = result.x;
    y = result.y;
    return result;
}

Vector2 Vector2::operator*=(const double& scale) {
    Vector2 result = Vector2(x, y) * scale;
    x = result.x;
    y = result.y;
    return result;
}

Vector2 Vector2::operator/=(const double& scale) {
    Vector2 result = Vector2(x, y) / scale;
    x = result.x;
    y = result.y;
    return result;
}

bool Vector2::operator==(const Vector2& v1)
{
    return (x == v1.x && y == v1.y);
}

double Vector2::dotc(const Vector2& v1) {
    return dot(Vector2(x, y), v1);
}

double Vector2::abs() {
    return sqrt(x * x + y * y);
}

Vector2 Vector2::normalise() {
    return normaliseV2(Vector2(x, y));
}

Vector2 Vector2::getParallelVector(Vector2 vec1) {
    Vector2  thisVec = Vector2(x, y);
    return  thisVec * dot(thisVec, vec1) / dot(thisVec, thisVec);
}

Vector2 Vector2::getPerpendicularVector(Vector2 vec1) {
    return vec1 - getParallelVector(vec1);
}

// 3D VECTOR

Vector3::Vector3() {
    x = 0;
    y = 0;
    z = 0;
}

Vector3::Vector3(double ix, double iy, double iz) {
    x = ix;
    y = iy;
    z = iz;
}

Vector3::Vector3(double lst[3]) {
    x = lst[0];
    y = lst[1];
    z = lst[2];
}

Vector3::Vector3(std::vector<double> lst) {
    assert(lst.size() == 3);
    x = lst[0];
    y = lst[1];
    z = lst[2];
}

Vector3 Vector3::operator+(const Vector3& v1) {
    Vector3 result;
    result.x = v1.x + x;
    result.y = v1.y + y;
    result.z = v1.z + z;
    return result;

}Vector3 Vector3::operator-(const Vector3& v1) {
    Vector3 result;
    result.x = x - v1.x;
    result.y = y - v1.y;
    result.z = z - v1.z;
    return result;
}

Vector3 Vector3::operator*(const double& scale) {
    Vector3 result;
    result.x = this->x * scale;
    result.y = this->y * scale;
    result.z = this->z * scale;
    return result;
}

Vector3 Vector3::operator/(const double& scale) {
    return Vector3(x, y, z) * (1 / scale);
}

Vector3 Vector3::operator+=(const Vector3& v1) {
    Vector3 result = Vector3(x, y, z) + v1;
    x = result.x;
    y = result.y;
    z = result.z;
    return result;
}

Vector3 Vector3::operator-=(const Vector3& v1) {
    Vector3 result = Vector3(x, y, z) - v1;
    x = result.x;
    y = result.y;
    z = result.z;
    return result;
}

Vector3 Vector3::operator*=(const double& scale) {
    Vector3 result = Vector3(x, y, z) * scale;
    x = result.x;
    y = result.y;
    z = result.z;
    return result;
}

Vector3 Vector3::operator/=(const double& scale) {
    Vector3 result = Vector3(x, y, z) / scale;
    x = result.x;
    y = result.y;
    z = result.z;
    return result;
}

bool Vector3::operator==(const Vector3& v1)
{
    return (x == v1.x && y == v1.y && z == v1.z);
}

double Vector3::dotc(const Vector3& v1) {
    return dot(Vector3(x, y, z), v1);
}

Vector3 Vector3::crossc(const Vector3& v1) {
    return cross(Vector3(x, y, z), v1);
}

double Vector3::abs() {
    return sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::normalise() {
    return normaliseV3(Vector3(x, y, z));
}

Vector3 Vector3::getParallelVector(Vector3 vec1) {
    Vector3  thisVec = Vector3(x, y, z);
    return  thisVec * dot(thisVec, vec1) / dot(thisVec, thisVec);
}

Vector3 Vector3::getPerpendicularVector(Vector3 vec1) {
    return vec1 - getParallelVector(vec1);
}

// 4D VECTOR

Vector4::Vector4() {
    x = 0;
    y = 0;
    z = 0;
    w = 0;
}

Vector4::Vector4(double ix, double iy, double iz, double iw) {
    x = ix;
    y = iy;
    z = iz;
    w = iw;
}

Vector4::Vector4(double lst[4]) {
    x = lst[0];
    y = lst[1];
    z = lst[2];
    w = lst[3];
}

Vector4::Vector4(std::vector<double> lst) {
    assert(lst.size() == 4);
    x = lst[0];
    y = lst[1];
    z = lst[2];
    w = lst[3];
}

Vector4 Vector4::operator+(const Vector4& v1) {
    Vector4 result;
    result.x = v1.x + x;
    result.y = v1.y + y;
    result.z = v1.z + z;
    result.w = v1.w + w;
    return result;
}

Vector4 Vector4::operator-(const Vector4& v1) {
    Vector4 result;
    result.x = x - v1.x;
    result.y = y - v1.y;
    result.z = z - v1.z;
    result.w = w - v1.w;
    return result;
}

Vector4 Vector4::operator*(const double& scale) {
    Vector4 result;
    result.x = x * scale;
    result.y = y * scale;
    result.z = z * scale;
    result.w = w * scale;
    return result;
}

Vector4 Vector4::operator+=(const Vector4& v1) {
    Vector4 result = Vector4(x, y, z, w) + v1;
    x = result.x;
    y = result.y;
    z = result.z;
    w = result.w;
    return result;
}

Vector4 Vector4::operator-=(const Vector4& v1) {
    Vector4 result = Vector4(x, y, z, w) - v1;
    x = result.x;
    y = result.y;
    z = result.z;
    w = result.w;
    return result;
}

Vector4 Vector4::operator*=(const double& scale) {
    Vector4 result = Vector4(x, y, z, w) * scale;
    x = result.x;
    y = result.y;
    z = result.z;
    w = result.w;
    return result;
}

Vector4 Vector4::operator/=(const double& scale) {
    Vector4 result = Vector4(x, y, z, w) / scale;
    x = result.x;
    y = result.y;
    z = result.z;
    w = result.w;
    return result;
}

bool Vector4::operator==(const Vector4& v1)
{
    return (x == v1.x && y == v1.y && z == v1.z && w == v1.w);
}

Vector4 Vector4::operator/(const double& scale) {
    return Vector4(x, y, z, w) * (1 / scale);
}

double Vector4::dotc(const Vector4& v1) {
    return dot(Vector4(x, y, z, w), v1);
}

double Vector4::abs() {
    return sqrt(x * x + y * y + z * z + w * w);
}

Vector4 Vector4::normalise() {
    return normaliseV4(Vector4(x, y, z, w));
}

Vector4 Vector4::getParallelVector(Vector4 vec1) {
    Vector4 thisVec = Vector4(x, y, z, w);
    return thisVec * dot(thisVec, vec1) / dot(thisVec, thisVec);
}

Vector4 Vector4::getPerpendicularVector(Vector4 vec1) {
    return vec1 - getParallelVector(vec1);
}


// FUNCTION DEFS
double dot(Vector2 v1, Vector2 v2) {
    return ((v1.x * v2.x) + (v1.y * v2.y));
}

double dot(Vector3 v1, Vector3 v2) {
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z*v2.z));
}

double dot(Vector4 v1, Vector4 v2) {
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z*v2.z) + (v1.w + v2.w));
}


double getAngle(Vector2 v1, Vector2 v2) {
    return acos(dot(v1, v2) / (v1.abs(), v2.abs()));
}

double getAngle(Vector3 v1, Vector3 v2) {
    return acos(dot(v1, v2) / (v1.abs(), v2.abs()));
}

double getAngle(Vector4 v1, Vector4 v2) {
    return acos(dot(v1, v2) / (v1.abs(), v2.abs()));
}


Vector3 cross(Vector3 v1, Vector3 v2) {
    Vector3 result;
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return result;
}


Vector2 normaliseV2(Vector2 vec) {
    double absolute = vec.abs();
    return Vector2(vec.x / absolute, vec.y / absolute);
}

Vector3 normaliseV3(Vector3 vec) {
    double absolute = vec.abs();
    return Vector3(vec.x / absolute, vec.y / absolute, vec.z / absolute);
}

Vector4 normaliseV4(Vector4 vec) {
    double absolute = vec.abs();
    return Vector4(vec.x / absolute, vec.y / absolute, vec.z / absolute, vec.w / absolute);
}