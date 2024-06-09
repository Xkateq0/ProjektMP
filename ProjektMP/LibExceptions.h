#ifndef LIBEXCEPTIONS_H
#define LIBEXCEPTIONS_H

#include <iostream>
#include <exception>

/**
 * @brief Klasa bazowa dla niestandardowych wyj�tk�w.
 *
 * @param message Wiadomo�� opisuj�ca wyj�tek.
 */
class MyExceptions : public std::exception {
private:
    std::string message;
public:
    /**
     * @brief Konstruktor inicjalizuj�cy wiadomo�� wyj�tku.
     *
     * @param msg Wiadomo�� wyj�tku.
     */
    MyExceptions(const std::string msg) : message(msg) {}

    /**
     * @brief Zwraca wiadomo�� wyj�tku.
     *
     * @return const char* Wiadomo�� wyj�tku.
     */
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

/**
 * @brief Wyj�tek zg�aszany, gdy nie mo�na znale�� pliku.
 */
class FileNotFound : public MyExceptions {
public:
    FileNotFound() : MyExceptions("Nie znaleziono pliku") {}
};

/**
 * @brief Wyj�tek zg�aszany w przypadku b��du wej�cia/wyj�cia.
 */
class IOError : public MyExceptions {
public:
    IOError() : MyExceptions("Blad wejscia/wyjscia") {}
};

/**
 * @brief Wyj�tek zg�aszany w przypadku b��du alokacji pami�ci.
 */
class BadAlloc : public MyExceptions {
public:
    BadAlloc() : MyExceptions("Blad alokacji pamieci") {};
};

/**
 * @brief Wyj�tek zg�aszany, gdy nast�pi wyj�cie poza zakres.
 */
class OutOfRange : public MyExceptions {
public:
    OutOfRange() : MyExceptions("Wyjscie poza zakres") {}
};

/**
 * @brief Wyj�tek zg�aszany, gdy wielko�� jest ujemna.
 */
class NegativeSize : public MyExceptions {
public:
    NegativeSize() : MyExceptions("Ujemna wielkosc") {}
};

/**
 * @brief Wyj�tek zg�aszany, gdy argument jest niepoprawny.
 */
class InvalidArgument : public MyExceptions {
public:
    InvalidArgument() : MyExceptions("Nie poprawny argument") {}

    /**
     * @brief Konstruktor umo�liwiaj�cy przekazanie niestandardowej wiadomo�ci.
     *
     * @param msg Wiadomo�� wyj�tku.
     */
    InvalidArgument(std::string msg) : MyExceptions(msg) {}
};

/**
 * @brief Wyj�tek zg�aszany, gdy wyst�pi b��d otwarcia pliku.
 */
class FileOpenError : public MyExceptions {
public:
    FileOpenError() : MyExceptions("Blad otwarcia pliku") {}
};

/**
 * @brief Wyj�tek zg�aszany, gdy rozszerzenie pliku jest niepoprawne.
 */
class InvalidFileExtention : public MyExceptions {
public:
    InvalidFileExtention() : MyExceptions("Bledne rozszerzenie pliku") {}
};

/**
 * @brief Wyj�tek zg�aszany, gdy plik jest pusty.
 */
class EmptyFile : public MyExceptions {
public:
    EmptyFile() : MyExceptions("Pusty plik") {}

    /**
     * @brief Konstruktor umo�liwiaj�cy przekazanie niestandardowej wiadomo�ci.
     *
     * @param msg Wiadomo�� wyj�tku.
     */
    EmptyFile(std::string msg) : MyExceptions(msg) {}
};

#endif // LIBEXCEPTIONS_H
