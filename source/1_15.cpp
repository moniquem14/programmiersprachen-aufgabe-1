#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <catch.hpp>


double mile_to_kilometer(double mile) {
	if (mile < 0) {
		return -1;
	}
	double km = mile * 1.609344;
	return km;
}


TEST_CASE("describe_mile_to_kilometer", "[mile_to_kilometer]") {
	REQUIRE(mile_to_kilometer(999) == Approx(1607.73));
	REQUIRE(mile_to_kilometer(133) == Approx(214.043));
	REQUIRE(mile_to_kilometer(22) == Approx(35.4056));
	REQUIRE(mile_to_kilometer(1) == Approx(1.60934));
	REQUIRE(mile_to_kilometer(-21) == -1);
	REQUIRE(mile_to_kilometer(-1) == -1);
	REQUIRE(mile_to_kilometer(0) == 0);

}

int main(int argc, char* argv[]) {

	double mile;
	std::cout << "Bitte geben Sie die umzurechnende Meilenzahl ein: ";
	std::cin >> mile;
	std::cout << mile << " Meilen sind umgerechnet " << mile_to_kilometer(mile) << " Kilometer" << std::endl;

	return Catch::Session().run(argc, argv);


}