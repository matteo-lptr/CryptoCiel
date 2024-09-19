#include <iostream>
#include "RsaGestion.h"
#include "Hashgestion.h"
#include "AesGestion.h"
#include <fstream>

int main()
{
    HashGestion LM;
    std::string monMessageHash = "Crypto.txt";
    std::cout << LM.CalculateSHA256(monMessageHash) << std::endl;

    AesGestion AES;
    AES.GenerateAESKey();
    AES.SaveAESKeyToFile("ClefAES.txt");
    AES.EncryptFileAES256("Mess.txt", "EncryptAES.txt");
    AES.DecryptFileAES256("EncryptAES.txt", "DecryptAES.txt");

    RsaGestion RSA;
    RSA.generationClef("RSAPublic.pem", "RSAPrive.pem", 2048);
    
    /* 
        std::string MessageEncrypt = "Chien Chat Avion ";
        std::string MessageCrypt = RSA.chiffrementRsa(MessageEncrypt);
        std::cout << MessageCrypt << std::endl;
        std::string MessageDecrypt = RSA.dechiffrementRsa(MessageCrypt);
        std::cout << MessageDecrypt << std::endl;
     */

    RSA.chargementClefs("RSAPublic.pem", "RSAPrive.pem");
    RSA.chiffreDansFichier("")
}
