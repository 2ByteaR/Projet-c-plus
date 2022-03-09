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

    Elch1 *GetElch1() const
    {
        return elch1;
    }

    void AjoutEnTete(double donnee)
    {

        Elch1 *nouveau = new Elch1(donnee, elch1);

        elch1 = nouveau;
    };

    void SupprEnTete(){

        Elch1 *nouveau = elch1->Getadresse();
        free(elch1);
        elch1 = nouveau;

    }

    void AjoutEnQueue(double donnee)
    {
        Elch1 *chaine = new Elch1(donnee,NULL);
        Elch1* parcours = this->elch1;

        while (parcours->Getadresse() != NULL)
        {
            parcours = parcours->Getadresse();
        }
        
        parcours->SetAdresse(chaine);
    };

    void affiche()
    {

        Elch1 *actuel = this->elch1;

        while (actuel != NULL)
        {
            actuel->afficher();
            actuel = actuel->Getadresse();
        }
        
    };

    void SupprEnQueue(){

        Elch1* parcours = this->elch1;
        while (parcours->Getadresse() != NULL)
        {
            parcours = parcours->Getadresse();
        }
        
        free(parcours);
    }
};



