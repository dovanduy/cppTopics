#include <iostream>

using namespace std;

int main()
{
    wcout.imbue(locale("bulgarien")); // ???

    wcout << "Ëÿ-Ëÿ-Ëß";

    return 0;
}
