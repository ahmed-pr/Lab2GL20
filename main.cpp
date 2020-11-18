#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

int main(int argc, char const *argv[])
{
    hash1 hashObj;
    int index;
    index = hashObj.HASH("Kerzazi");
     int opt;
    string key;
    while (1)
    {
        cout << " 1. AddItem\t 2.DisplayItem \t 3.Search \t 4.Exit " << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            hashObj.ajouterItem();
            break;
        case 2:
            hashObj.afficherItem();
            break;
        case 3:
            hashObj.chercherItem();
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}
