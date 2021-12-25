struct livre {
    int num;
    string titre<30>;
    string auteur<30>;
    string editeur<30>;
    string anneePub<16>;
    int nbrExemplaire;
    float prix;
};
typedef livre livres<>;
program LIVRE{
    version V1{
        void INIT() = 1;
        void AJOUTER(livre) = 2;
        void MODIFIER(livre) = 3;
        void SUPPRIMER(int) = 4;
        livre CONSULTER(int) = 5;
        livres AFFICHER() = 6;
        livres AUTEUR(string) = 7;
        float PRIX() = 8; 

    } = 1;
} = 0x23456782;