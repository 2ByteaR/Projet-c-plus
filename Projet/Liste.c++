#include <iostream>
using namespace std;

class Elch1
{

private:
    double donnee;
    Elch1 *adresse;

public:
    Elch1(double donnee, Elch1 *adresse)
    {
        this->donnee = donnee;
        this->adresse = adresse;
    }

    Elch1(double donnee)
    {
        this->donnee = donnee;
        this->adresse = nullptr;
    }

    double GetDonnee() const
    {
        return donnee;
    }

    void SetDonnee(double donnee)
    {
        this->donnee = donnee;
    }

    Elch1 *Getadresse() const
    {
        return adresse;
    }

    void SetAdresse(Elch1 *adresse)
    {
       
        this->adresse = adresse;
    }

    void afficher()
    {
        cout << "L'adresse est : " << adresse << " et voici la donnee " << donnee << endl;
    }
};

class SuiteCh1
{
private:
    Elch1 *pDebut;

public:
    SuiteCh1()
    {
        pDebut = nullptr;
    }

    SuiteCh1(Elch1 *element)
    {
        pDebut = element;
    }

    Elch1 *GetElch1() const
    {
        return pDebut;
    }

    void AjoutEnTete(double donnee)
    {

        Elch1 *nouveau = new Elch1(donnee, pDebut);

        pDebut = nouveau;
    };

    void SupprEnTete(){

        Elch1 *nouveau = pDebut->Getadresse();
        free(pDebut);
        pDebut = nouveau;

    }

    void AjoutEnQueue(double donnee)
    {
        Elch1 *chaine = new Elch1(donnee,NULL);
        Elch1* parcours = this->pDebut;

        while (parcours->Getadresse() != NULL)
        {
            parcours = parcours->Getadresse();
        }
        
        parcours->SetAdresse(chaine);
    };

    void affiche()
    {

        Elch1 *actuel = this->pDebut;

        while (actuel != NULL)
        {
            actuel->afficher();
            actuel = actuel->Getadresse();
        }
    };

    void SupprEnQueue(){

        Elch1* parcours = this->pDebut;
        while (parcours->Getadresse() != NULL)
        {
            parcours = parcours->Getadresse();
        }
        
        free(parcours);
    }
};

int main()
{

    SuiteCh1 ch;
    ch.AjoutEnTete(89);
    ch.AjoutEnTete(42);
    ch.AjoutEnTete(51);
    ch.AjoutEnQueue(39);
    ch.SupprEnTete();

    ch.affiche();
};
