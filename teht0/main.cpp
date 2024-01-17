#include <iostream>
#include <cstdlib>
#include <ctime>


int game(int maxnum) {

    std::srand(std::time(0));


    int arvottuLuku = std::rand() % maxnum + 1;


    int pelaajanArvaus = 0;
    int arvauskerrat = 0;


    while (pelaajanArvaus != arvottuLuku) {

        std::cout << "Arvaa luku 1-" << maxnum << ": ";
        std::cin >> pelaajanArvaus;

        if (pelaajanArvaus == arvottuLuku) {
            std::cout << "Oikea vastaus! Arvasit luvun " << arvottuLuku << std::endl;
        } else if (pelaajanArvaus < arvottuLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else {
            std::cout << "Luku on pienempi." << std::endl;
        }

        arvauskerrat++;
    }

    return arvauskerrat;
}

int main() {

    int maxnum = 40;


    int arvauskerrat = game(maxnum);


    std::cout << "Arvausten maara: " << arvauskerrat << std::endl;

    return 0;
}
