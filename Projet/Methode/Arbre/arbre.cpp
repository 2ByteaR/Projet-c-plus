#include <iostream>
using namespace std;

class Arbre{
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

    void insertNode(const double& k) {
    if (this->GetDonnee() == NULL) {
        Arbre arbre = Arbre(k);
        root->key = k;
        root->left = nullptr;
        root->right = nullptr;
    } else {
        if (k < root->key)
            insertNode(root->left, k);
        else
            insertNode(root->right, k);
    }
}

    BSTreeNode *findNode(BSTreeNode *root, const string& k) {
    if (root == nullptr)
        return nullptr;

    if (k == root->key)
        return root;

    if (k < root->key)
        return findNode(root->left, k);
    else
        return findNode(root->right, k);
}

    void printNode(BSTreeNode *n) {
    if (n != nullptr) {
        cout << n->key << endl;
    } else {
        cout << "Not a valid node!" << endl;
    }
    }

        
};



int main(){
    Arbre SuiteArbre;
    SuiteArbre.AjoutArbre(5);
    SuiteArbre.AjoutArbre(89);
    SuiteArbre.afficher();
    
}