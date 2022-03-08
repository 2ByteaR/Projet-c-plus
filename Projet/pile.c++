#include <iostream>
using namespace std;

class PileEl{
    private:
        int value;
		struct PileEl *next;
    public:
        PileEl(int value){
            this->next = nullptr;
            this->value = value;
        }
        PileEl(int value, PileEl *next){
            this->next = next;
            this->value = value;
        }

        int GetValue(){
            return this->value;
        }

        PileEl *GetPileEl(){
            return this->next;
        }

        void SetValue(int value){
            this->value = value;
        }

        void SetPileEl(PileEl *next){
            this->next = next;
        }
};

class pile
{
private:
    PileEl *pPremier;
public:
    
    pile(PileEl *pPremier){
        this->pPremier = pPremier;
    };
    
    pile(){
        this->pPremier = NULL;
    }

    PileEl *GetPile(){
        return pPremier;
    }

    void SetPile(PileEl *pSuivant){
        this->pPremier = pSuivant;
    }


    void Empiler(int value){
        
        PileEl *pileEl = new PileEl(value,this->GetPile());
        this->pPremier = pileEl;
            
    }

    void Depiler(){
        PileEl *tamp = new PileEl(*(this->pPremier->GetPileEl()));
        free(pPremier);
        this->SetPile(tamp);
    }

    bool estVide(){
        if (this->GetPile() == NULL)
        {
            return true;
        }else
        {
            return false;
        }
        
        
    }

    void AfficherPile(){
        pile *tamp = new pile(pPremier);

        if (tamp->estVide())
        {
            
            cout << "Rien a afficher, la Pile est vide." << endl;
        }
        
        while(!tamp->estVide()){
		    cout <<"[" << tamp->GetPile()->GetValue() << "]" << endl;
		    *tamp = tamp->GetPile()->GetPileEl();
	    }

        if (tamp->estVide())
        {
            cout <<endl;
        }
        

        free(&tamp);
    }
    
};

int main(int argc, char const *argv[]){
    
    pile pile;

    pile.Empiler(5);
    pile.Empiler(7);
    pile.Empiler(89);
    pile.AfficherPile();

    pile.Depiler();
    pile.AfficherPile();

    pile.Depiler();
    pile.AfficherPile();

    free(&pile);
    
   
}
