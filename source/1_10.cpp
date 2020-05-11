#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <catch.hpp>


int sum_multiples(int k) {
    int sum = 0;
    for (int i = 1; i <= k; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sum = sum + i;
    }
    if (k < 1 || k>1000) {
        std::cout << "Fehler! Erlaubt sind positive Ganzzahlen bis 1000." << std::endl;
        return -1;
    }
    return sum;
}


TEST_CASE("describe_sum_multipes", "[sum_multiples]") {
    REQUIRE(sum_multiples(999) == 233168);
    REQUIRE(sum_multiples(1001) == -1);
    REQUIRE(sum_multiples(1) == 0);
    REQUIRE(sum_multiples(-1) == -1);
    REQUIRE(sum_multiples(0) == -1);

}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}