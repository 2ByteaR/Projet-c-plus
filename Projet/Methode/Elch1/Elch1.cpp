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

    double getDonnee() const
    {
        return donnee;
    }

    void setDonnee(double donnee)
    {
        this->donnee = donnee;
    }

    Elch1 *getadresse() const
    {
        return adresse;
    }

    void setAdresse(Elch1 *adresse)
    {
       
        this->adresse = adresse;
    }

    void afficher()
    {
        cout << "[" << donnee << "]" << "->";
    }
};

