Projekt na przedmiot ZPR

"Sieć neuronowa"

Autorzy: Artur Braun Magdalena Segieda

Do skompilowania projektu niezbędne są:
Biblioteki Qt5 (zgodne z wersją 5.13.2)  
CMake w wersji co najmniej 3.6
    
W przypadku systemu Linux make
    
Kompilator C++ (VS, g++, etc.)


Biblioteka Qt5:
W systemach korzystających z repozytoriów Debiana (m.in. Ubuntu) wystarczy zainstalować paczkę "qtbase5-dev".
W przypadku pozostałych systemów należy zainstalować Qt pobierając go wpierw ze strony projektu - https://www.qt.io/download-open-source/
Gdy CMake nie znajdzie automatycznie ścieżki do bibliotek Qt, należy podać ścieżkę ich instalacji (miejsce gdzie znajduje się folder lib) przy wywołaniu CMake: -D CMAKE_PREFIX_PATH={ŚCIEŻKA}

CMAKE:
Należy pobrać CMake ze strony projektu https://cmake.org/download/ oraz zainstalować go zgodnie z załączoną doń instrukcją.
INSTALACJA:
Instalacja polega na wywołaniu programu CMake podając jako argument ścieżkę do folderu w którym znajduje się projekt.

W przypadku systemu z rodziny Linux, lub Windows korzystającego ze środowiska MinGW, polecenie to wygeneruje plik Makefile. Wywołanie komendy 'make' skompiluje projekt i wygeneruje plik wykonywalny 'ZPR_NN'.

W przypadku systemu Windows, korzystającego z kompilatora Visual Studio wygenerowany zostanie projekt Visual Studio, który należy skompilować odpowiednim kompilatorem.

URUCHOMIENIE:
(po spełnieniu wymagań oraz przejściu do katalogu projektu)
SYSTEM LINUX
W terminalu:
mkdir build && cd build # stworzenie i przejście do katalogu build    
cmake ../ # uruchomienie CMake
make # kompilacja i konsolidacja projektu   
./ZPR_NN # uruchomienie programu

SYSTEM WINDOWS -> kompilacja w programie VisualStudio lub w power shell:

mkdir build

cd build 

cmake -G "$GENERATOR" ../ #w miejsce GENERATOR należy wstawić kompilator

cmake --build . 

