#include <iostream>

using namespace std;

int main()
{
    wcout.imbue(locale("bulgarien")); // ???

    wcout << "��-��-��";

    return 0;
}
