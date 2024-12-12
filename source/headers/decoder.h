#pragma once

#include <map>
#include <string>
#include "exceptions.h"
#include "network.h"

using namespace std;

class Decoder
{
public:
    Decoder();

    void parse(int argc, char *argv[]);

    void getDataBase();
    void showHelp() const;
    string &getDataBasePath();
    string &getLogPath();
    string &getAddres();
    int &getPort();

private:
    string db_path;  ///< Путь к файлу базы данных.
    string log_path; ///< Путь к файлу логов.
    int port;        ///< Порт.
    string address;  ///< Адрес.
};


