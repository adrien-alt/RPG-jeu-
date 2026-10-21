#include "Sauvegarde.h"

#include <iostream>
#include <memory>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/exception.h>

bool testerConnexionBDD()
{
    try
    {
        sql::mysql::MySQL_Driver* driver;
        driver = sql::mysql::get_mysql_driver_instance();

        std::unique_ptr<sql::Connection> connexion(
            driver->connect("tcp://127.0.0.1:3306", "rpg_user", "TON_MOT_DE_PASSE")
        );

        connexion->setSchema("rpg_db");

        std::cout << "Connexion a MySQL reussie !" << std::endl;
        return true;
    }
    catch (sql::SQLException& e)
    {
        std::cerr << "Erreur MySQL : " << e.what() << std::endl;
        return false;
    }
}
