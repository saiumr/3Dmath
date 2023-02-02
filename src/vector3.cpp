#include "vector3.hpp"

namespace math {
const Vector3 Vector3::kZeroVector(0, 0, 0);

void Vector3::Zero() { x = y = z = 0.0f; }  // Set zero vector

void Vector3::Normalize() {
  float a = 1.0f/Modulus(*this);
  *this *= a;
}

Vector3 CrossMul(const Vector3& v1, const Vector3& v2) {
  return Vector3(
    v1.y*v2.z - v1.z*v2.y,
    v1.z*v2.x - v1.x*v2.z,
    v1.x*v2.y - v1.y*v2.x
  );
}

float Modulus(const Vector3& v) {
  float modulus = v.x*v.x + v.y*v.y + v.z*v.z;
  return sqrt(modulus);
}

float Distance(const Vector3& v1, const Vector3& v2) {
  float dx = v1.x - v2.x;
  float dy = v1.y - v2.y;
  float dz = v1.z - v2.z;
  return sqrt(dx*dx + dy*dy + dz*dz);
}

}
