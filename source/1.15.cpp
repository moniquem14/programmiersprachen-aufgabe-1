#include <iostream>

double mile_to_kilometer(double meile)
{
    std::cout << "Bitte geben sie eine Meilenzahl ein:\n";
    std::cin >> meile;

    double kilometer;
    kilometer = 1, 60934;

    kilometer = kilometer * meile;
    return kilometer;
}

int main()
{
    double mile_to_kilometer(45);
    std::cout << kilometer << " km" << std::endl;
}