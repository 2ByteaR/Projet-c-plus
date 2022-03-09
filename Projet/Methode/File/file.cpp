#include <iostream>
#include "../Elch1/Elch1.cpp"
using namespace std;

class File {
private:
  Elch1 *pPremier;

public:
  File(Elch1 *pPremier) { this->pPremier = pPremier; };

  File() { this->pPremier = NULL; }

  Elch1 *GetFile() { return pPremier; }

  void SetFile(Elch1 *pSuivant) { this->pPremier = pSuivant; }

  void AjoutEnTete(int value) {
    Elch1 *elch1 = new Elch1(value, this->GetFile());
    this->pPremier = elch1;
  }

  void RetraitEnQueue() {
    //A FAIRE
  }

  bool estVide() {
    return this->GetFile() == NULL ? true : false;
  }

  void AfficherFile() {
    File *tamp = new File(pPremier);

    if (tamp->estVide()) {
      cout << "Rien a afficher, la file est vide." << endl;
    }

    while (!tamp->estVide()) {
      cout << "[" << tamp->GetFile()->GetDonnee() << "]" << endl;
      *tamp = tamp->GetFile()->Getadresse();
    }

    if (tamp->estVide()) {
      cout << endl;
    }

  }
};