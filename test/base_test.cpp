#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "base.h"

TEST_CASE("min test"){
    testBase b;
    b.fill();
    REQUIRE(b.min()==0);
}
TEST_CASE("max test"){
    testBase b;
    b.fill();
    REQUIRE(b.max()==9);
}
TEST_CASE("sum test") {
    testBase b;
    b.fill();
    REQUIRE(b.sum==);
}