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

    Elch1 *GetPile()
    {
        return pPremier;
    }

    void SetPile(Elch1 *pSuivant)
    {
        this->pPremier = pSuivant;
    }

    void Empiler(int value)
    {

        Elch1 *pileEl = new Elch1(value, this->GetPile());
        this->pPremier = pileEl;
    }

    void Depiler()
    {
        Elch1 *tamp = new Elch1(*(this->pPremier->Getadresse()));
        free(pPremier);
        this->SetPile(tamp);
    }

    bool estVide()
    {
        if (this->GetPile() == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void AfficherPile()
    {
        Pile *tamp = new Pile(pPremier);

        if (tamp->estVide())
        {

            cout << "Rien a afficher, la Pile est vide." << endl;
        }

        while (!tamp->estVide())
        {
            cout << "[" << tamp->GetPile()->GetDonnee() << "]" << endl;
            *tamp = tamp->GetPile()->Getadresse();
        }

        if (tamp->estVide())
        {
            cout << endl;
        }

        free(&tamp);
    }
};


