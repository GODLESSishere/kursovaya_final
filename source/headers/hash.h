/** 
* @file hash.h
* @brief Определения вспомогательных функций для криптографических операций.
* @details Этот файл содержит определения функций для генерации соли и вычисления хеша.
* @date 13.12.2024
* @version 1.0
* @author Мамелин Д. А.
*/

#pragma once

#include <string>

#include <cryptopp/sha.h>
#include <cryptopp/hex.h>
#include <cryptopp/osrng.h>
#include <cryptopp/filters.h>
#include <algorithm>

using namespace std;

/**
* @brief Функция для генерации соли.
* @return Соль в виде строки.
*/
string getSalt();

/**
* @brief Функция для вычисления хеша.
* @param data Данные для хеширования.
* @return Хеш в виде строки.
*/
string getHash(const string &data);
