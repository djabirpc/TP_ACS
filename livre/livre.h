/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _LIVRE_H_RPCGEN
#define _LIVRE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct livre {
	int num;
	char *titre;
	char *auteur;
	char *editeur;
	char *anneePub;
	int nbrExmplr;
	float prix;
};
typedef struct livre livre;

typedef struct {
	u_int livres_len;
	livre *livres_val;
} livres;

#define LIVRE 0x23456782
#define V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define INIT 1
extern  int * init_1(void *, CLIENT *);
extern  int * init_1_svc(void *, struct svc_req *);
#define AJOUTER 2
extern  int * ajouter_1(livre *, CLIENT *);
extern  int * ajouter_1_svc(livre *, struct svc_req *);
#define MODIFIER 3
extern  int * modifier_1(livre *, CLIENT *);
extern  int * modifier_1_svc(livre *, struct svc_req *);
#define SUPPRIMER 4
extern  int * supprimer_1(int *, CLIENT *);
extern  int * supprimer_1_svc(int *, struct svc_req *);
#define CONSULTER 5
extern  livre * consulter_1(int *, CLIENT *);
extern  livre * consulter_1_svc(int *, struct svc_req *);
#define AFFICHER 6
extern  livres * afficher_1(void *, CLIENT *);
extern  livres * afficher_1_svc(void *, struct svc_req *);
#define AUTEUR 7
extern  livres * auteur_1(char **, CLIENT *);
extern  livres * auteur_1_svc(char **, struct svc_req *);
#define PRIX 8
extern  float * prix_1(void *, CLIENT *);
extern  float * prix_1_svc(void *, struct svc_req *);
extern int livre_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define INIT 1
extern  int * init_1();
extern  int * init_1_svc();
#define AJOUTER 2
extern  int * ajouter_1();
extern  int * ajouter_1_svc();
#define MODIFIER 3
extern  int * modifier_1();
extern  int * modifier_1_svc();
#define SUPPRIMER 4
extern  int * supprimer_1();
extern  int * supprimer_1_svc();
#define CONSULTER 5
extern  livre * consulter_1();
extern  livre * consulter_1_svc();
#define AFFICHER 6
extern  livres * afficher_1();
extern  livres * afficher_1_svc();
#define AUTEUR 7
extern  livres * auteur_1();
extern  livres * auteur_1_svc();
#define PRIX 8
extern  float * prix_1();
extern  float * prix_1_svc();
extern int livre_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_livre (XDR *, livre*);
extern  bool_t xdr_livres (XDR *, livres*);

#else /* K&R C */
extern bool_t xdr_livre ();
extern bool_t xdr_livres ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_LIVRE_H_RPCGEN */
