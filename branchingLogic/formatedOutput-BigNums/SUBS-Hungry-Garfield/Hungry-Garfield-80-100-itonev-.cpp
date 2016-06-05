// https://gist.github.com/cprog/1fe341ab5c4e6ed69072f25e5566f549
#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char **argv) {

    double totalMoney;
    double rate;
    double pizzaPrize;
    double lasagnaPrize;
    double sandwichPrize;
    unsigned int pizzaQuantity;
    unsigned int lasagnaQuantity;
    unsigned int sandwitchQuantity;

    std::cin >> totalMoney;
    std::cin >> rate;
    std::cin >> pizzaPrize;
    std::cin >> lasagnaPrize;
    std::cin >> sandwichPrize;
    std::cin >> pizzaQuantity;
    std::cin >> lasagnaQuantity;
    std::cin >> sandwitchQuantity;

    pizzaPrize /= rate;
    lasagnaPrize /= rate;
    sandwichPrize /= rate;

    double spentForPizza = pizzaPrize * pizzaQuantity;
    double spentForLasagna = lasagnaPrize * lasagnaQuantity;
    double spentForSandwitches = sandwichPrize * sandwitchQuantity;

    double totalNeeded = spentForPizza + spentForLasagna + spentForSandwitches;
    double diffMoney = totalMoney - totalNeeded;


    if (diffMoney >= 0) 
    {
       std::cout << std::fixed << std::setprecision(2); 
       std::cout << "Garfield is well fed, John is awesome. Money left: $" 
       << diffMoney << ".";
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Garfield is hungry. John is a badass. Money needed: $" 
	<< std::abs(diffMoney) << ".";
    }
    return 0;
}
