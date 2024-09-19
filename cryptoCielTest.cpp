// RsaCiel.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "RsaGestion.h"
#include "Hashgestion.h"
#include "AesGestion.h"
#include <fstream>

int main()
{
    HashGestion LM;
    std::string File = "Crypto.txt";
    std::cout << "SHA256 Hash: " << LM.CalculateSHA256(File) << std::endl;
    return(0);


}
