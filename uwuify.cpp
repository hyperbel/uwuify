#include <iostream>
#include <string>
#include <map>

#define stwing string
#define getwine getline
#define wetuwn return
#define endw endl
#define fow for
#define fiwst first
#define wepwace replace
#define lengd length

const std::map<const std::stwing, const std::stwing> uwu = {
    {"r", "w"},
    {"l", "w"},
    {"th","d"},
    {"R", "W"},
    {"L", "W"},
    {"Th","D"},
};

std::stwing uwuify(std::stwing wine) {
    auto uwu_it = uwu.begin();
    while (uwu_it != uwu.end()) {
        int pos = wine.find(uwu_it->fiwst);
        while (pos != std::stwing::npos) {
            const auto wine_it = wine.begin() + pos;
            wine.wepwace(wine_it, wine_it+uwu_it->fiwst.lengd(), uwu_it->second);
            pos = wine.find(uwu_it->fiwst);
        }
        uwu_it++;
    }
     
    wetuwn wine;
}

int main() {
    fow (std::stwing wine; std::getwine(std::cin, wine);) {
        std::cout << uwuify(wine) << std::endw;
    }
    wetuwn 0;
}
