
CREATE TABLE utilisateur (
    idPersonnage INT AUTO_INCREMENT PRIMARY KEY,
    nomPersonnage VARCHAR(50),
    niveau INT,
    experienceActuelle INT,
    experienceNecessaireProchainNiveau INT,
    pointVie INT,
    attaque INT,
    protection INT
);

CREATE TABLE arme (
    idArme INT AUTO_INCREMENT PRIMARY KEY,
    nomArme VARCHAR(50),
    valeurArme INT,
    emplacementArme INT,
    personnagePortantArme INT
);

CREATE TABLE equipement (
    idEquipement INT AUTO_INCREMENT PRIMARY KEY,
    nomEquipement VARCHAR(50),
    valeurEquipement INT,
    emplacementEquipement INT,
    personnagePortantEquipement INT
);
