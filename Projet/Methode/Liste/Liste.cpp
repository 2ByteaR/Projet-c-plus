#include <iostream>
#include "../Elch1/Elch1.cpp"
using namespace std;


class SuiteCh1
{
private:
    Elch1 *elch1;

public:
    SuiteCh1(){
        elch1 = nullptr;
    }

    SuiteCh1(Elch1 *element)
    {
        elch1 = element;
    }

    Elch1 *getElch1() const
    {
        return elch1;
    }

    void ajoutEnTete(double donnee)
    {

        Elch1 *nouveau = new Elch1(donnee, elch1);

        elch1 = nouveau;
    };

    void supprEnTete(){

        Elch1 *nouveau = elch1->getadresse();
        free(elch1);
        elch1 = nouveau;

    }

    void ajoutEnQueue(double donnee)
    {
        Elch1 *chaine = new Elch1(donnee,NULL);
        Elch1* parcours = this->elch1;

        while (parcours->getadresse() != NULL)
        {
            parcours = parcours->getadresse();
        }
        
        parcours->setAdresse(chaine);
    };

    void affiche()
    {

        Elch1 *actuel = this->elch1;

        while (actuel != NULL)
        {
            actuel->afficher();
            actuel = actuel->getadresse();
        }
        
    };

    void supprEnQueue(){

        Elch1* parcours = this->elch1;
        while (parcours->getadresse() != NULL)
        {
            parcours = parcours->getadresse();
        }
        
        free(parcours);
    }
};



