/*
 * Utilities Harry Nisbet
 * Initial Version 08/09/2020.
 * Version: 1.2
 *
 */

#ifndef UTILITIES_UTILITIES_H
#define UTILITIES_UTILITIES_H
#include <iostream>
#include <fstream>

extern std::string version;


void writeLog(std::string fileName, std::string  message, bool append=true)
{
    std::fstream logFile;
    if (append)
    {
        logFile.open(fileName.c_str(),std::fstream::out | std::fstream::app );
        logFile << message << std::endl;
    }
    else
    {
        logFile.open(fileName.c_str(),std::fstream::out);
        logFile << message << std::endl;;
    }
    logFile.close();
}

void print(std::string text, bool newLine=true)
{
    if (newLine)
    {
        std::cout << text<< std::endl;
    }
    else
    {
        std::cout << text;
    }
}

/*void sendEmail(std::string to, std::string from, std::string subject,
               std::string message, std::string IP)
{
    //const char* charArray = to.c_str();
    //printf("%s\n",charArray);
}*/
void sendEmail(std::string address, std::string message)
{

    char cmd[2000];
    sprintf(cmd, "sendEmail -t %s -u \"Missing Stamping Details\" -m \"%s\" -s 172.16.1.140 -f harry.nisbet@libertysteelgroup.com", address.c_str(), message.c_str());
    system(cmd);
}

#endif //UTILITIES_UTILITIES_H
