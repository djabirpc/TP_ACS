/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "bib.h"
#include <stdlib.h>
#include <stdio.h>

livre *faire_livre(int num,char *titre, char *acteur, char *editeur, char* annePub, int nbrExemplaire, float prix)
{
    livre *lvr;

    lvr = (livre*)malloc(sizeof(livre));
    if (lvr == NULL)
        return NULL;
    lvr->num = num;
	lvr->titre = titre;
	lvr->acteur = acteur;
	lvr->editeur = editeur;
	lvr->anneePub = annePub;
	lvr->nbrExemplaire = nbrExemplaire;
	lvr->prix = prix;
    lvr->next = NULL;
    return lvr;
}

void print_list(livre * head) {
    livre * current = head;
	if(current == NULL){
		printf("Livre No Found \n");
	}
    while (current != NULL) {
        printf("{%d, %s, %s, %s, %s, %d ,%f}\n",current->num,
												current->titre,
												current->acteur,
												current->editeur,
												current->anneePub,
												current->nbrExemplaire,
												current->prix);
        current = current->next;
    }
}

void print_livre(livre * livre) {
	if(livre == NULL){
		printf("Livre No Found \n");
	}
	printf("{%d, %s, %s, %s, %s, %d ,%f}\n",livre->num,
											livre->titre,
											livre->acteur,
											livre->editeur,
											livre->anneePub,
											livre->nbrExemplaire,
											livre->prix);
}

int main(int argc, char *argv[])
{
    livre *new;
	livre *new_livre;
    CLIENT *clnt;
    int *result;

	int choisir;

	int num;
	char *titre;
	titre = (char*)malloc(30);
	char *acteur;
	acteur = (char*)malloc(30);
	char *editeur;
	editeur = (char*)malloc(30);
	char *annePub;
	annePub = (char*)malloc(30);
	int nbrExemplaire;
	float prix;

	void  *result_1;
	char *init_livre_1_arg;
	void  *result_2;
	livre  ajoute_livre_1_arg;
	void  *result_3;
	char * modifier_livre_1_arg;
	void  *result_4;
	char * supprimer_livre_1_arg;
	supprimer_livre_1_arg = (char*)malloc(30);
	livre  *result_5;

	char * consulter_livre_1_arg;
	consulter_livre_1_arg = (char*)malloc(30);
	livre  *result_6;

	char *consulter_tout_1_arg;
	livre  *result_7;

	char * afficher_livre_1_arg;
	afficher_livre_1_arg = (char*)malloc(30);
	float  *result_8;

	char *prix_total_1_arg;

    if (argc < 2)
        return 1;

    clnt = clnt_create(argv[1], PRINTER, PRINTER_V1, "tcp");
    if (clnt == NULL) {
        printf("error: could not connect to server.\n");
        return 1;
    }
	while(1)
	{
		printf("Choisir une action à effectuer :\n");
		printf("1 : Initialiser la bibliothèque\n");
		printf("2 : Ajouter livre(s)\n");
		printf("3 : Modifier un livre\n");
		printf("4 : Supprimer un livre\n");
		printf("5 : Consulter les informations d'un livre\n");
		printf("6 : Afficher tous les livres\n");
		printf("7 : Afficher la liste des livres d'un *auteur*\n");
		printf("8 : Afficher le prix total des livres\n");
		printf("0 : Quitter le programme\n");
		printf("--> ");
		scanf("%d",&choisir);
		switch (choisir)
		{
		case 1:
			/* Initialiser la bibliothèque */
			result_1 = init_livre_1((void*)&init_livre_1_arg, clnt);
			if (result_1 == (void *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;
		case 2:
			/* Ajouter livre(s) */
			printf("num -->");
			scanf("%d",&num);
			printf("titre -->");
			scanf("%s",titre);
			printf("acteur -->");
			scanf("%s",acteur);
			printf("editeur -->");
			scanf("%s",editeur);
			printf("annee Pub(yyyy/mm/dd) -->");
			scanf("%s",annePub);
			printf("nbr exemplaire -->");
			scanf("%d",&nbrExemplaire);
			printf("prix -->");
			scanf("%f",&prix);
			new_livre = faire_livre(num,titre,acteur,editeur,annePub,nbrExemplaire,prix);
			result_2 = ajoute_livre_1(new_livre, clnt);
			if (result_2 == (void *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			printf("Livre Ajouter !. \n");
			break;
		case 3:
			/* Modifier un livre */
			result_3 = modifier_livre_1(&modifier_livre_1_arg, clnt);
			if (result_3 == (void *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;
		case 4:
			/* Supprimer un livre */
			printf("titre -->");
			scanf("%s",supprimer_livre_1_arg);
			result_4 = supprimer_livre_1(&supprimer_livre_1_arg, clnt);
			if (result_4 == (void *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;
		case 5:
			/* Consulter les informations d’un livre */
			printf("titre -->");
			scanf("%s",consulter_livre_1_arg);
			result_5 = consulter_livre_1(&consulter_livre_1_arg, clnt);
			if (result_5 == (livre *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			print_livre(result_5);
			break;
		case 6:
			/* Afficher tous les livres */
			result_6 = consulter_tout_1((void*)&consulter_tout_1_arg, clnt);
			if (result_6 == (livre *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			print_list(result_6);
			break;
		case 7:
			/* Afficher la liste des livres d’un auteur */
			printf("acteur -->");
			scanf("%s",afficher_livre_1_arg);
			result_7 = afficher_livre_1(&afficher_livre_1_arg, clnt);
			if (result_7 == (livre *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			print_list(result_7);
			break;
		case 8:
			/* Afficher le prix total des livres */
			result_8 = prix_total_1((void*)&prix_total_1_arg, clnt);
			if (result_8 == (float *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			printf("prix total des livres %.2f DA\n",*result_8);
			break;
		default:
			/* Quitter le programme */
			break;
		}

	}
    return 0;
}