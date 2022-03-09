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
        cout << "[" << donnee << "]" << "->";
    }
};

