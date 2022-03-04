#include <iostream>

int main(int argc, char const *argv[])
    {
    Elch1* e1 = new Elch1(15,NULL);
    Elch1* e2 = new Elch1(16.5,e1);
    e1->afficher();
    e2->afficher();
}
    