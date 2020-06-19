#include <iostream>

using namespace std;

#include "CircularLinkedList.h"

int main()
{
    CircularLinkedList *ls = new CircularLinkedList();

    ls->AppendToCircularLinkedList(1, 98);// Dairesel  ba�l� listeye veri at�yorum.
    ls->AppendToCircularLinkedList(4, 87);// Dairesel  ba�l� listeye veri at�yorum.
    ls->AppendToCircularLinkedList(6, 79);// Dairesel  ba�l� listeye veri at�yorum.
    ls->AppendToCircularLinkedList(9, 86);// Dairesel  ba�l� listeye veri at�yorum.
    ls->AppendToCircularLinkedList(3, 70);// Dairesel  ba�l� listeye veri at�yorum.

    ls->AddToTheBeginning(5, 100);// Dairesel  ba�l� listenin ba��na veri at�yorum.
    ls->AddToTheBeginning(7, 88);// Dairesel ba�l� listenin ba��na veri at�yorum.

    ls->PrintCircularLinkedList(); // Dairesel ba�l� listeyi ekrana yazd�r�yorum.

//    for( int i=0; i<10; i++ ){
//        ls->DeleteTheLastNode();
//        ls->PrintCircularLinkedList();
//    }

    ls->DeleteTheNodeAtGivenIndex(3); //Kullan�c�n�n verdi�i index'i silen fonksiyonu �a��rd�m.
	//ls->DeleteTheFirstNode(); // Dairesel ba�l� listenin ilk d���m�n� siler.
	//ls->DeleteTheLastNode(); // Dairesel ba�l� listenin son d���m�n� siler.

    ls->PrintCircularLinkedList(); // Dairesel ba�l� listeyi ekrana yazd�r�yorum.

    return 0;
}

