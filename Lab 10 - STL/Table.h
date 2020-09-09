#include "Data.h"
#include "Sum.h"

using namespace std::placeholders; //namespace pozwalajacy na uzywanie placeholderow

struct { //struktura dzialajaca jako compare
        bool operator()(Data a, Data b, int x) const
        {   
            return a.vec[x] < b.vec[x];
        }   
    } customFunc;


struct print_elementD { //struktura pozwalajaca na wypisanie kazdego elementu Data z wektora
	void operator()(Data n) { n.print(); }
};

class Table { //klasa Table zawierająca w sobie wektor obiektów klasy Data
public:
    
	void operator+=(Data x) { //operator dodający obiekt Data do wektora
		dataVec.push_back(x);
	}

	Table() {} //konstruktor
	
	~Table(){}; //destruktor
	
	Table sort(unsigned int x){ //funkcja sortujaca po kolumnie x 
	
    	if(x >= dataVec.size()){
	        std::cout << "Indeks 3 nieprawidlowy!" << std::endl;
	    }
	    
	    auto func = std::bind(customFunc, _1, _2, x); //std::bind pozwalajacy nam przekazac wartosc x jako wartosc kolumny
	    
	    std::sort(dataVec.begin(), dataVec.end(), func); //korzystamy z std::sort by posortowac elementy po kolumnach
	    
	    return *this;
	    
	    
	}
	
	Table sortBy(bool (*func)(const Data&, const Data&)) { //funkcja sortujaca wektor po komparatorze globalnym z main (po sumach)
	    std::sort(dataVec.begin(), dataVec.end(), func);
        return *this;
	}

	void print() { //funkcja print która korzystając ze struktury print_elementD wypisuje elementy wektora
		std::for_each(std::begin(dataVec), std::end(dataVec), print_elementD());
		std::cout <<"\n";
	}

	std::vector<Data> dataVec; //wektor dataVec przechowuje obiekty Data
};

