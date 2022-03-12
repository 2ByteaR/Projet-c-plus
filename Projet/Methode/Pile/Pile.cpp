#include <iostream>
#include "../Elch1/Elch1.cpp"
using namespace std;

class Pile
{
private:
    Elch1 *pPremier;

public:
    Pile(Elch1 *pPremier)
    {
        this->pPremier = pPremier;
    };

    Pile()
    {
        this->pPremier = NULL;
    }

    Elch1 *getPile()
    {
        return pPremier;
    }

    void setPile(Elch1 *pSuivant)
    {
        this->pPremier = pSuivant;
    }

    void empiler(int value)
    {

        Elch1 *pileEl = new Elch1(value, this->getPile());
        this->pPremier = pileEl;
    }

    void depiler()
    {
        Elch1 *tamp = new Elch1(*(this->pPremier->getadresse()));
        free(pPremier);
        this->setPile(tamp);
    }

    bool estVide()
    {
        if (this->getPile() == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void afficherPile()
    {
        Pile *tamp = new Pile(pPremier);

        if (tamp->estVide())
        {

            cout << "Rien a afficher, la Pile est vide." << endl;
        }

        while (!tamp->estVide())
        {
            cout << "[" << tamp->getPile()->getDonnee() << "]" << endl;
            *tamp = tamp->getPile()->getadresse();
        }

        if (tamp->estVide())
        {
            cout << endl;
        }

        free(&tamp);
    }
};


