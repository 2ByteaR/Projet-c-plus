#include <iostream>

class Arbre
{
    private:
        double donnee;
        Arbre *left;
        Arbre *right;

    public:

        Arbre(double donnee, Arbre *left, Arbre *right)
        {
            this->donnee = donnee;
            this->left = left;
            this->right = right;
        }

        Arbre(double donnee){
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

        Arbre *GetRight() const
        {
            return right;
        }

        void SetRight(Arbre *arbre)
        {
            this->right = arbre;
        }
        
        Arbre *GetLeft() const
        {
            return left;
        }

        void SetLeft(Arbre *arbre)
        {
            this->left = arbre;
        }

        
};