#include <iostream>
using namespace std;

class FileEl {
private:
  int value;
  struct FileEl *next;

public:
  FileEl(int value) {
    this->next = nullptr;
    this->value = value;
  }
  FileEl(int value, FileEl *next) {
    this->next = next;
    this->value = value;
  }

  int GetValue() { return this->value; }

  FileEl *GetFileEl() { return this->next; }

  void SetValue(int value) { this->value = value; }

  void SetFileEl(FileEl *next) { this->next = next; }
};

class File {
private:
  FileEl *pPremier;

public:
  File(FileEl *pPremier) { this->pPremier = pPremier; };

  File() { this->pPremier = NULL; }

  FileEl *GetFile() { return pPremier; }

  void SetFile(FileEl *pSuivant) { this->pPremier = pSuivant; }

  void AjoutEnTete(int value) {
    FileEl *fileEl = new FileEl(value, this->GetFile());
    this->pPremier = fileEl;
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
      cout << "[" << tamp->GetFile()->GetValue() << "]" << endl;
      *tamp = tamp->GetFile()->GetFileEl();
    }

    if (tamp->estVide()) {
      cout << endl;
    }

  }
};

int main(int argc, char const *argv[]) {

  File file;

  file.AjoutEnTete(5);
  file.AjoutEnTete(7);
  file.AjoutEnTete(89);
  file.AfficherFile();

  file.RetraitEnQueue();
  file.AfficherFile();

  file.RetraitEnQueue();
  file.AfficherFile();

}