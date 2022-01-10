# TP_ACS
Développer une application client/serveur en RPC 2-tiers et 3-tiers  
## Pour executer la partie Tableau
```
gcc -o client livre_client.c livre_clnt.c livre_xdr.c
gcc -o server livre_server.c livre_svc.c livre_xdr.c
```

## Pour executer la partie SQL  
il faut installer la package libmysqlclient pour Linux "sudo apt install libmysqlclient-dev"  
et creer Database Livre sur votre MySql
```
gcc -o client livre_client.c livre_clnt.c livre_xdr.c
gcc -o server livre_server.c livre_svc.c livre_xdr.c `mysql_config --cflags --libs`
```
