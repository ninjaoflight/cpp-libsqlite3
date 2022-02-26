#include <catch2/catch.hpp>


TEST_CASE("sampleModule", "[Test]"){
    SECTION("Sample section"){
        REQUIRE((2+2) == 4);
    }
}