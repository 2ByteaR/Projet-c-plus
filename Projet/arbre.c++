#include <iostream>
using namespace std;

class ElArbre
{
    private:
        double donnee;
        ElArbre *left;
        ElArbre *right;

    public:

        ElArbre(double donnee, ElArbre *left, ElArbre *right)
        {
            this->donnee = donnee;
            this->left = left;
            this->right = right;
        }

        ElArbre(double donnee){
            this->donnee = donnee;
            this->left = nullptr;
            this->right = nullptr;
        }

        double GetDonnee() const
        {
            return donnee;
        }

        void SetDonnee(double donnee)
        {
            this->donnee = donnee;
        }

        ElArbre *GetRight() const
        {
            return right;
        }

        void SetRight(ElArbre *arbre)
        {
            this->right = arbre;
        }
        
        ElArbre *GetLeft() const
        {
            return left;
        }

        void SetLeft(ElArbre *arbre)
        {
            this->left = arbre;
        }


        void afficher(){
            cout << "L'arbre de gauche à pour adresse : " << left << "L'arbre de droite à pour adresse : " << right << "Il à comme donner" << donnee  << endl;
        }

        
};

class SuiteArbre
{
    private:
        ElArbre *pRacine;
    public:

    SuiteArbre(){
        pRacine = nullptr;
    }

    SuiteArbre(ElArbre *pRacine){
        pRacine = this->pRacine;
    }

    ElArbre *GetArbre() const
    {
        return pRacine;
    }

    void AjoutEnRacine(double donnee){

        ElArbre *nouveau = new ElArbre(donnee, pRacine->GetLeft(),pRacine->GetRight());

        pRacine = nouveau;
    }
    

};


int main(){
    SuiteArbre SuiteArbre;
    SuiteArbre.AjoutEnRacine(5);
    SuiteArbre.AjoutEnRacine(7);
    SuiteArbre.GetArbre()->afficher();
}