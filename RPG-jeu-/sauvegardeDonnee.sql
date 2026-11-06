
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

CREATE TABLE armure (
    idEquipement INT AUTO_INCREMENT PRIMARY KEY,
    nomEquipement VARCHAR(50),
    valeurEquipement INT,
    emplacementEquipement INT,
    personnagePortantEquipement INT
);
CREATE TABLE objet (
    idObjet INT AUTO_INCREMENT PRIMARY KEY,
    nomObjet VARCHAR(50) NOT NULL,
    typeObjet VARCHAR(30) NOT NULL,
    valeurObjet INT
);
CREATE TABLE inventaire (
    idInventaire INT AUTO_INCREMENT PRIMARY KEY,
    personnageId INT NOT NULL,
    objetId INT NOT NULL,
    quantite INT NOT NULL DEFAULT 0,

    FOREIGN KEY (personnageId)
        REFERENCES utilisateur(idPersonnage),

    FOREIGN KEY (objetId)
        REFERENCES objet(idObjet),

    UNIQUE (personnageId, objetId)
);
