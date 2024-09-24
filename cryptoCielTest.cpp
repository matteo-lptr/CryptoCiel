#include <iostream>
#include "RsaGestion.h"
#include "Hashgestion.h"
#include "AesGestion.h"
#include <fstream>

int main()
{

        /*
                * SHA256 - (4) Question 2,3,4,5

        HashGestion LM;
        std::string monMessageHash = "Crypto.txt";
        std::cout << LM.CalculateSHA256(monMessageHash) << std::endl;
        
        
        
                * AES - (5) Question 6,7,8,9
        */

        AesGestion AES;

        /*
        AES.GenerateAESKey();
        AES.SaveAESKeyToFile("ClefAES.txt");
        AES.EncryptFileAES256("Mess.txt", "EncryptAES.txt");
        AES.DecryptFileAES256("EncryptAES.txt", "DecryptAES.txt");
     
                * RSA - (6.1) 1er Programme
        */

        RsaGestion RSA;
        RSA.generationClef("MatteoRSAPublic.pem", "MatteoRSAPrive.pem", 2048);

        /*
        std::string MessageEncrypt = "Chien Chat Avion ";
        std::string MessageCrypt = RSA.chiffrementRsa(MessageEncrypt);
        std::cout << MessageCrypt << std::endl;
        std::string MessageDecrypt = RSA.dechiffrementRsa(MessageCrypt);
        std::cout << MessageDecrypt << std::endl;
     
                * RSA - (6.2) 2eme Programmes
                
        RSA.chargementClefs("MatteoRSAPublic.pem", "MatteoRSAPrive.pem")
        RSA.chiffreDansFichier("MatteoRSADonnee.txt", "MatteoRSAChiffre.txt");
        RSA.dechiffrementFichier("MatteoRSADonnee.txt", "MatteoRSADechiffre.txt", 2048);

                * RSA - (6.3) 3eme Programmes

        RSA.chargementClefs("YouennRSAPublic.pem", "YouennRSAPrive.pem");
        RSA.chiffrementFichier("MatteoRSADonnee.txt", "MatteoRSAChiffre.txt", 2048);
        RSA.dechiffrementFichier("YouennRSAChiffre.txt", "MatteoRSADechiffre.txt", 2048);
        

        RSA.chargementClefs("MatteoRSAPublic.pem", "MatteoRSAPrive.pem");
        RSA.chiffrementFichier("MatteoRSADonneeBinaire.txt", "MatteoRSAChiffreBinaire.txt", 2048);
        RSA.dechiffrementFichier("MatteoRSAChiffreBinaire.txt", "MatteoRSADechiffreBinaire.txt", 2048),
        */


        AES.GenerateAESKey();
        AES.SaveAESKeyToFile("MatteoClefAESHybride.txt");
        RSA.chiffreDansFichier("MatteoClefAESHybride.txt", "MatteoChiffreHybride.txt");

}
