/*
 * Utilities Harry Nisbet
 * Initial Version 08/09/2020.
 * Version: 1.2.1
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

std::string  getString(int number)
{
    return std::to_string(number);
}


void sendEmail(std::string address, std::string message)
{

    char cmd[2000];
    sprintf(cmd, "sendEmail -t %s -u \"Missing Stamping Details\" -m \"%s\" -s 172.16.1.140 -f harry.nisbet@libertysteelgroup.com", address.c_str(), message.c_str());
    system(cmd);
}

void sendEmail(std::string to, std::string subject,
               std::string message,std::string from, std::string smtp_IP)
{

    char cmd[2000];
    sprintf(cmd, "sendEmail -t %s -u \"%s\" -m \"%s\" -s %s -f %s",
                    to.c_str(), subject.c_str(),message.c_str(),
                    smtp_IP.c_str(),from.c_str());
    system(cmd);
}

#endif //UTILITIES_UTILITIES_H
