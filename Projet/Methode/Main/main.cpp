#include <iostream>

using namespace std;

void Operation(){

}


int main()
{

    int choix;

    cout << "Quel type de manipulation Voulez vous faire " << endl;
    cout <<"-------------" <<endl << "| 1 - Liste |" << endl << "| 2 - Pile  |" << endl << "| 3 - File  |" << endl << "| 4 - Arbre |"<< endl <<"-------------" <<endl;
    cin >> choix;

    if(choix == 1) {
    #include "../Liste/Liste.cpp"
    
    cout << "Quel opération vous-Faire" << endl;
    cout << "1 - Ajouter en Tête" << endl << "| 2 - Pile  |" << endl << "| 3 - File  |" << endl << "| 4 - Arbre |"<< endl <<"-------------" <<endl;

    SuiteCh1 ch1;

    int nombre;

    cin >> nombre;
    ch1.AjoutEnTete(14);
    ch1.AjoutEnTete(27);
    ch1.AjoutEnQueue(571);
    ch1.AjoutEnQueue(851);
    ch1.AjoutEnTete(54);
    // ch1.SupprimerEnTete();
    // ch1.SupprimerEnQueue();

    ch1.affiche();

    } else if(choix == 2) {
    #include "../Pile/Pile.cpp"
    Pile pile;

    
    pile.Empiler(5);
    pile.Empiler(7);
    pile.Empiler(89);

    pile.Depiler();

    pile.AfficherPile();

    } else if(choix == 3) {
        #include "../file/file.cpp"
    } else if(choix == 4) {
        #include "../Arbre/arbre.cpp"
    }

}
    