#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

int main(int argc, char const *argv[])
{
    hash1 hashObj;
    int index;
    index = hashObj.HASH("Kerzazi");
    hashObj.ajouterItem("Khalil", "0783475625");
    hashObj.ajouterItem("Aymane", "0654325625");
    hashObj.ajouterItem("Ahmed", "0783457615");
    hashObj.ajouterItem("Salma", "0654231436");
    cout<<"--------------Items-------------------"<<endl;
    hashObj.afficherItem();
    hashObj.chercherItem("Khalil");
    hashObj.chercherItem("Khalil");
    cout<<"Le nombre d'Items dans l'indexe 4 est: "<<hashObj.nombreItems(4)<<endl;
    cout<<"Items existant dans l'indexe 4 : "<<endl;
    hashObj.afficherItemsDansIndex(3);
    cout<<"On va proceder a supprimer l'item de nom khalil........"<<endl;
    hashObj.supprimerItem("Khalil");
    return 0;
}


