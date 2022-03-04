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

        void SetPile(PileEl *next){
            this->next = next;
        }
};

class pile
{
private:
    int value;
    PileEl *element;
public:
    
    pile(int value,PileEl *element){
        this->value = value;
        this->element = element;
    };

    pile(int value){
        this->value = value;
        this->element = NULL;
    }
    
    pile(){
        this->value = 0;
        this->element = NULL;
    }

    PileEl *GetPileEl(){
        return element;
    }


    void Empiler(int value){
        
        PileEl *pileEl = new PileEl(value);

        element = pileEl;
        
    }

    bool estVide(){
        if (this->element->GetPileEl() == NULL)
        {
            return true;
        }
        return false;
    }

    void AfficherPile(){

        if (this->estVide())
        {
            
            cout << "Rien a afficher, la Pile est vide." << endl;
        }
        
        while(!this->estVide()){
		    cout <<"[" << this->element->GetValue() << "]" << endl;
		    element = this->element->GetPileEl();
	    }
    }
    
    void test(){
         cout << "Rien a afficher, la Pile est vide." << endl;
    }
};

int main(int argc, char const *argv[]){
    
    pile pile;
    pile.Empiler(5);
    pile.AfficherPile();
}
