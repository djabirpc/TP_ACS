/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "livre.h"

bool_t
xdr_livre (XDR *xdrs, livre *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->num))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->titre, 255))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->auteur, 30))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->editeur, 30))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->anneePub, 16))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nbrExmplr))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->prix))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_livres (XDR *xdrs, livres *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->livres_val, (u_int *) &objp->livres_len, ~0,
		sizeof (livre), (xdrproc_t) xdr_livre))
		 return FALSE;
	return TRUE;
}
