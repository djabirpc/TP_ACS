/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "bib.h"
#include <stdlib.h>
#include <stdio.h>



int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	CLIENT *clnt;
	void  *result_1;
	char *init_1_arg;
	void  *result_2;
	livre  ajouter_1_arg;
	void  *result_3;
	livre  modifier_1_arg;
	void  *result_4;
	int  supprimer_1_arg;
	livre  *result_5;
	int  consulter_1_arg;
	livres  *result_6;
	char *afficher_1_arg;
	livres  *result_7;
	char * auteur_1_arg;
	auteur_1_arg = (char*)malloc(30);
	float  *result_8;
	char *prix_1_arg;

	int choisir;
	
	livre *lv1;
	lv1 = malloc(sizeof(livre));
	

	int num;
	char *titre;
	titre = (char*)malloc(30);
	char *auteur;
	auteur = (char*)malloc(30);
	char *editeur;
	editeur = (char*)malloc(30);
	char *annePub;
	annePub = (char*)malloc(30);
	int nbrExemplaire;
	float prix;


	clnt = clnt_create (host, LIVRE, V1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
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
		switch(choisir)
		{
			case 1:
				result_1 = init_1((void*)&init_1_arg, clnt);
				if (result_1 == (void *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				break;
			case 2:
				
				printf("num -->");
				scanf("%d",&num);
				printf("titre -->");
				scanf("%s",titre);
				printf("auteur -->");
				scanf("%s",auteur);
				printf("editeur -->");
				scanf("%s",editeur);
				printf("annee Pub(yyyy/mm/dd) -->");
				scanf("%s",annePub);
				printf("nbr exemplaire -->");
				scanf("%d",&nbrExemplaire);
				printf("prix -->");
				scanf("%f",&prix);
				
				lv1->titre = (char*)malloc(30);
				lv1->auteur = (char*)malloc(30);
				lv1->editeur = (char*)malloc(30);
				lv1->anneePub = (char*)malloc(30);

				lv1->num = num;
				lv1->titre = titre;
				lv1->auteur = auteur;
				lv1->editeur = editeur;
				lv1->anneePub = annePub;
				lv1->nbrExemplaire = nbrExemplaire;
				lv1->prix = prix;
				
				result_2 = ajouter_1(lv1, clnt);
				if (result_2 == (void *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				break;
			case 3:
				printf("num -->");
				scanf("%d",&num);
				printf("titre -->");
				scanf("%s",titre);
				printf("auteur -->");
				scanf("%s",auteur);
				printf("editeur -->");
				scanf("%s",editeur);
				printf("annee Pub(yyyy/mm/dd) -->");
				scanf("%s",annePub);
				printf("nbr exemplaire -->");
				scanf("%d",&nbrExemplaire);
				printf("prix -->");
				scanf("%f",&prix);
				
				lv1->titre = (char*)malloc(30);
				lv1->auteur = (char*)malloc(30);
				lv1->editeur = (char*)malloc(30);
				lv1->anneePub = (char*)malloc(30);

				lv1->num = num;
				lv1->titre = titre;
				lv1->auteur = auteur;
				lv1->editeur = editeur;
				lv1->anneePub = annePub;
				lv1->nbrExemplaire = nbrExemplaire;
				lv1->prix = prix;
				result_3 = modifier_1(lv1, clnt);
				if (result_3 == (void *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				break;
			case 4:
				printf("num -->");
				scanf("%d",&supprimer_1_arg);
				result_4 = supprimer_1(&supprimer_1_arg, clnt);
				if (result_4 == (void *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				break;
			case 5:
				printf("Donner num --> ");
				scanf("%d",&consulter_1_arg);
				result_5 = consulter_1(&consulter_1_arg, clnt);
				if (result_5 == (livre *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				break;
			case 6:
				result_6 = afficher_1((void*)&afficher_1_arg, clnt);
				if (result_6 == (livres *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				for(int i=0;i<result_6->livres_len;i++){
					printf("{%d,%s,%s,%s,%s,%d,%.2f}\n",result_6->livres_val[i].num
					,result_6->livres_val[i].titre,result_6->livres_val[i].auteur
					,result_6->livres_val[i].editeur,result_6->livres_val[i].anneePub
					,result_6->livres_val[i].nbrExemplaire,result_6->livres_val[i].prix);
				}
				break;
			case 7:
				printf("Donner auteur --> ");
				scanf("%s",auteur_1_arg);
				result_7 = auteur_1(&auteur_1_arg, clnt);
				if (result_7 == (livres *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				for(int i=0;i<result_7->livres_len;i++){
					printf("{%d,%s,%s,%s,%s,%d,%.2f}\n",result_7->livres_val[i].num
					,result_7->livres_val[i].titre,result_7->livres_val[i].auteur
					,result_7->livres_val[i].editeur,result_7->livres_val[i].anneePub
					,result_7->livres_val[i].nbrExemplaire,result_7->livres_val[i].prix);
				}
				break;
			case 8:
				result_8 = prix_1((void*)&prix_1_arg, clnt);
				if (result_8 == (float *) NULL) {
					clnt_perror (clnt, "call failed");
				}
				break;
		}
	}

	clnt_destroy (clnt);
exit (0);
}