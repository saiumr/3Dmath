#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "vector3.hpp"

TEST_CASE("Test Vector3 Class") {
  math::Vector3 v(0, 0, 0);
  REQUIRE( v == math::Vector3::kZeroVector );
}
