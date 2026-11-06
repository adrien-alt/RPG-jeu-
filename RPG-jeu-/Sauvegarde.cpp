
#include "Sauvegarde.h"

#include <mysql_driver.h>
#include <cppconn/exception.h>

Database::Database(std::string utilisateur, std::string mdp, std::string adresse)
    : driver(nullptr),
      connection(nullptr),
      nomUtilisateur(utilisateur),
      motDePasse(mdp),
      adresseServeur(adresse)
{
}

bool Database::connecter()
{
  try
  {
    driver = sql::mysql::get_mysql_driver_instance();

    connection = driver->connect(
        adresseServeur,
        nomUtilisateur,
        motDePasse);

    return true;
  }
  catch (sql::SQLException &e)
  {
    std::cerr << "Erreur de connexion MySQL : " << e.what() << std::endl;
    return false;
  }
}

void Database::deconnecter()
{
  if (connection != nullptr)
  {
    connection->close();
    delete connection;
    connection = nullptr;
  }
}
