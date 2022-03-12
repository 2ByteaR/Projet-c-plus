#include <iostream>
#include "../Elch1/Elch1.cpp"
using namespace std;

class File {
private:
  Elch1 *pPremier;

public:
  File(Elch1 *pPremier) { this->pPremier = pPremier; };

  File() { this->pPremier = NULL; }

  Elch1 *getFile() { return pPremier; }

  void setFile(Elch1 *pSuivant) { this->pPremier = pSuivant; }

  void ajoutEnTete(int value) {
    Elch1 *elch1 = new Elch1(value, this->getFile());
    this->pPremier = elch1;
  }

  void retraitEnQueue() {
    Elch1* parcours = this->getFile();
        while (parcours->getadresse() != NULL)
        {
            parcours = parcours->getadresse();
        }
        
        free(parcours);
  }

  bool estVide() {
    return this->getFile() == NULL ? true : false;
  }

  void afficherFile() {
    File *tamp = new File(pPremier);

    if (tamp->estVide()) {
      cout << "Rien a afficher, la file est vide." << endl;
    }

    while (!tamp->estVide()) {
      cout << "[" << tamp->getFile()->getDonnee() << "]" << endl;
      *tamp = tamp->getFile()->getadresse();
    }

    if (tamp->estVide()) {
      cout << endl;
    }

  }
};