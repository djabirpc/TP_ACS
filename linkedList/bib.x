struct livre {
	string titre<30>;
	string acteur<30>;
	string editeur<30>;
	string anneePub<12>;
	int num;
	int nbrExemplaire;
    float prix;
	livre *next;
};

program PRINTER {
	version PRINTER_V1 {
        void INIT_LIVRE() = 1;
        void AJOUTE_LIVRE(livre) = 2;
        void MODIFIER_lIVRE(string) = 3;
        void SUPPRIMER_lIVRE(string) = 4;
        livre CONSULTER_LIVRE(string) = 5;
        livre CONSULTER_TOUT() = 6;
        livre AFFICHER_LIVRE(string) = 7;
        float PRIX_TOTAL() = 8;
	} = 1;
} = 0x2fffffff;
