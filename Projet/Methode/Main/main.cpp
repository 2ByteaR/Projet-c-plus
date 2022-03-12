#include <iostream>

using namespace std;

int main() {

  int choix;
  do {
    cout << "Quel type de manipulation Voulez vous faire " << endl;
    cout << "-------------" << endl
         << "| 1 - Liste |" << endl
         << "| 2 - Pile  |" << endl
         << "| 3 - File  |" << endl
         << "| 4 - Arbre |" << endl
         << "-------------" << endl;
    cin >> choix;

    if (choix == 1) {
#include "../Liste/Liste.cpp"
      int choixOpe;

      cout << "Quel opération voulez vous-Faire" << endl;
      cout << "| 1 - Ajouter en Tête  |" << endl
           << "| 2 - SupprEnTete      |" << endl
           << "| 3 - AjoutEnQueue     |" << endl
           << "| 4 - SupprEnQueue     |" << endl
           << "-------------------------" << endl;
      cin >> choixOpe;

      SuiteCh1 ch1;

      double donnee;

      switch (choixOpe) {
      case 1:
        cout << "Entrez le nombre a ajouter en tete" << endl;
        cin >> donnee;
        ch1.ajoutEnTete(donnee);
        ch1.affiche();
        break;
      case 2:
        cout << "Supression en tete.." << endl;
        ch1.supprEnTete();
        ch1.affiche();
        break;
      case 3:
        cout << "Entrez le nombre a ajouter en queue" << endl;
        cin >> donnee;
        ch1.ajoutEnQueue(donnee);
        ch1.affiche();
        break;
      case 4:
        cout << "Supression en queue.." << endl;
        ch1.supprEnQueue();
        ch1.affiche();
        break;
      default:
        cout << "Choix Invalide" << endl;
      }
    } else if (choix == 2) {
#include "../Pile/Pile.cpp"
      int choixOpe;

      cout << "Quel opération voulez vous-Faire" << endl;
      cout << "| 1 - Empiler          |" << endl
           << "| 2 - Depiler      |" << endl
           << "| 3 - Est vide ?   |" << endl
           << "-------------------------" << endl;
      cin >> choixOpe;

      Pile p1;

      switch (choixOpe) {
      case 1:
        double donnee;
        cout << "Entrez le nombre a empiler" << endl;
        cin >> donnee;
        p1.empiler(donnee);
        p1.afficherPile();
        break;
      case 2:
        cout << "Depile.." << endl;
        p1.depiler();
        p1.afficherPile();
        break;
      case 3:
        cout << "La pile est elle vide ?:" << endl;
        cout << (p1.estVide() ? "Oui" : "Non") << endl;
        p1.afficherPile();
        break;
      default:
        cout << "Choix Invalide" << endl;
      }
    } else if (choix == 3) {
#include "../File/file.cpp"
      int choixOpe;
      cout << "Quel opération voulez vous-Faire" << endl;
      cout << "| 1 - Empiler          |" << endl
           << "| 2 - Depiler      |" << endl
           << "| 3 - Est vide ?   |" << endl
           << "-------------------------" << endl;
      cin >> choixOpe;

      File f1;

      switch (choixOpe) {
      case 1:
        double donnee;
        cout << "Entrez le nombre mettre en tete" << endl;
        cin >> donnee;
        f1.ajoutEnTete(donnee);
        f1.afficherFile();
        break;
      case 2:
        cout << "Retrait en queue.." << endl;
        f1.retraitEnQueue();
        f1.afficherFile();
        break;
      case 3:
        cout << "La pile est elle vide ?:" << endl;
        cout << (f1.estVide() ? "Oui" : "Non") << endl;
        f1.afficherFile();
        break;
      default:
        cout << "Choix Invalide" << endl;
      }
    }
  } while (choix != 1 || choix != 2 || choix != 3 || choix != 4);
}