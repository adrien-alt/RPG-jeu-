
#ifndef SAUVEGARDE_H
#define SAUVEGARDE_H

#include <string>
#include <mysql_driver.h>
#include <mysql_connection.h>

class Database
{
private:
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *connection;

    std::string nomUtilisateur;
    std::string motDePasse;
    std::string adresseServeur;

public:
    Database(std::string utilisateur, std::string mdp, std::string adresse);

    bool connecter();
    void deconnecter();
};

#endif
