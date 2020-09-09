#pragma once
#include <iostream>
#include <string>


class Path{

friend std::ostream& operator << (std::ostream& out, const Path& path); // deklaracja przyjazni z funkcja przeciazajaca operator "<<" tak by wypisywal w poprawny sposob path


    public:
        Path(const std::string& firstPath, char firstChar = UNIX); //Konstruktor nadający wartość stringa i znak systemu
        Path operator / (const std::string& sumPaths) const; //Przeładowanie operatora "/" służące do konkatenacji kolejnych elementów
        std::string parent() const; //funkcja zwracająca folder wyzej
        std::string str() const; //funkcja zwracająca ścieżkę zawartą w zmiennej string
        void reset(char changedSystem); //funkcja zmieniajaca system - zapis wyswietlanych bibliotek (pomiedzy \\' a '/'


//statyczne zmienne publiczne zawierające symbole uzywane pozniej w programie zalezne od systemów
         static const char WIN = '\\';
         static const char UNIX = '/';
        
    private:
        char systemChar; //symbol uzywany jako rozdzielenie folderów zalezny od systemu
        std::string string; //string przechowujący ścieżkę 


};

std::ostream& operator << (std::ostream& out, const Path& path);  //funkcja przeciazajaca operator "<<" tak by wypisywal w poprawny sposob path
