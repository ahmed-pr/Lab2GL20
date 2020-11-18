#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash1::HASH(string cle)
{
    int index;
    int hashage = 0;

    cout << cle.length();
    //for sur le nombre de char de cle
    for(int i = 0; i< cle.length(); i++)
    {
        // pour chaque char je reccupere le code ascii et je l'ajoute a la somme
        hashage = hashage + (int)cle[i];
        cout << cle[i] << endl;
        cout << hashage << endl;
    }

    // modulo de la sommme des codes ascii sur tailleTableau

    index = hashage % tailleTableau;

    //index = 0;
    cout << index << endl;

    return index;
}

hash1::hash1(){
     for (int i = 0; i<tailleTableau; i++){
        HashTable[i] = new item;
        HashTable[i]->nom = "vide";
        HashTable[i]->tel = "vide";
        HashTable[i]->next = NULL;
     }
}

void hash1::chercherItem(string nom){
    int index = HASH(nom);
    item* currItem = HashTable[index];
    while(currItem!= NULL){
        if(currItem->nom == nom){
            cout << "la personne recherch�e :" << endl;
            cout << "nom :" << nom << "tel:" << currItem->tel << endl;
            return;
        }
        else
            currItem = currItem->next;
    }
    cout << "la personne recherch�e est introuvable !" ;
}

void hash1::supprimerItem(string nom){
    int index = HASH(nom);
    if(HashTable[index]->next == NULL){ //un seul element dans "index"
        if(HashTable[index]->nom != nom){
            cout << "l'element a supprime est introuvable";
            return;
        }
        else{
            HashTable[index] = new item;
            HashTable[index]->nom = "vide";
            HashTable[index]->tel = "vide";

            cout << "l'element a �t� supprime" << endl;
            return;
        }
    }
    else{ // plusieurs elements dans l element d'indice index
        if(HashTable[index]->nom == nom){
            HashTable[index] = HashTable[index]->next;
            cout << "l'element empil� a �t� supprime" << endl;
            return ;
        }
        item* prevItem = HashTable[index] ;
        item* currItem = prevItem->next;

        while(currItem != NULL){
            if(currItem->nom == nom){
                prevItem->next = currItem->next;
                cout << "l'element empil� a �t� supprime" << endl;
                return;
            }
            else
                prevItem = currItem;
                currItem = currItem->next;
        }
        cout << "l'element a supprime est introuvable !" ;
    }
}
