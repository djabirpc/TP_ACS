
struct livre {
    int num;
    string titre<255>;
    string auteur<30>;
    string editeur<30>;
    string anneePub<16>;
    int nbrExmplr;
    float prix;
};
typedef livre livres<>;
program LIVRE{
    version V1{
        int INIT() = 1;
        int AJOUTER(livre) = 2;
        int MODIFIER(livre) = 3;
        int SUPPRIMER(int) = 4;
        livre CONSULTER(int) = 5;
        livres AFFICHER() = 6;
        livres AUTEUR(string) = 7;
        float PRIX() = 8; 

    } = 1;
} = 0x23456782;
