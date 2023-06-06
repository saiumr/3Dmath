#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "vector3.hpp"

TEST_CASE("Test Vector3 Class") {
  math::Vector3 v0(0, 0, 0);
  math::Vector3 v1(1, 1, 1);
  math::Vector3 v2(0, 0, 0);
  math::Vector3 v3(2, 2, 2);
  REQUIRE( v0 == math::Vector3::kZeroVector );
  v2 = v1;
  REQUIRE( v2 == v1 );
  REQUIRE( 2*v1 == v3 );
  REQUIRE( v1*2 == v3 );
}
