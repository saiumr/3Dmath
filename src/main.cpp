#include "vector3.hpp"

int main(int argc, char** argv) {
  math::Vector3 v(1, 1, 1);
  if (v != math::Vector3::kZeroVector ) {
    std::cout << "ok" << std::endl;
  }

  return 0;
}
