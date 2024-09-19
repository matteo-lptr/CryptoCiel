/* cryptoCielTest.cpp */

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

}
