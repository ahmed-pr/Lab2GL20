#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char recurrent(string s){
    const char* T = s.c_str();
    char P[s.length()];
    int p=0;
    for(int i=0 ;i<strlen(T); i++){
        for(int j=0; j<p; j++){
            if (T[i]==P[j])
                return T[i];
        }
            P[p]=T[i];
            p++;
    }
    return NULL;
}


int main()
{
    cout << "Entrer une chaine de caractere :";
    string s;
    cin >> s;
    char c = recurrent(s);
    if (c==NULL)
        cout << "\nIl n y'a pas de caractere recurrent dans cette chaine.";
    else{
        cout << "\nLe premier caractere recurrent dans la chaine : ";
        cout << c;
    }

    return 0;

}
