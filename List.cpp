/*
 * List.cpp
 * 
 * Class Description: List data collection ADT.
 * Class Invariant: Data collection with the following characteristics:
 *                   - Each element is unique (no duplicates).
 *                   - (What other characteristic does our List have?)
 *
 * Created on: May 28, 2017
 * Author: Harinderpal Singh
 */

#include "List.h"
#include <iostream>

using namespace std;

List::List() {
    elementCount = 0;
    patientsCareCardsStartWith0 = new Patient[];
    patientsCareCardsStartWith1 = new Patient[];
    patientsCareCardsStartWith2 = new Patient[];
    patientsCareCardsStartWith3 = new Patient[];
    patientsCareCardsStartWith4 = new Patient[];
    patientsCareCardsStartWith5 = new Patient[];
    patientsCareCardsStartWith6 = new Patient[];
    patientsCareCardsStartWith7 = new Patient[];
    patientsCareCardsStartWith8 = new Patient[];
    patientsCareCardsStartWith9 = new Patient[];
}

List::List(const List& list) {
    elementCount = list.elementCount;

    careCardsStartWith0Count = list.careCardsStartWith0Count;
    careCardsStartWith1Count = list.careCardsStartWith1Count;
    careCardsStartWith2Count = list.careCardsStartWith2Count;
    careCardsStartWith3Count = list.careCardsStartWith3Count;
    careCardsStartWith4Count = list.careCardsStartWith4Count;
    careCardsStartWith5Count = list.careCardsStartWith5Count;
    careCardsStartWith6Count = list.careCardsStartWith6Count;
    careCardsStartWith7Count = list.careCardsStartWith7Count;
    careCardsStartWith8Count = list.careCardsStartWith8Count;
    careCardsStartWith9Count = list.careCardsStartWith9Count;

    patientsCareCardsStartWith0 = list.patientsCareCardsStartWith0;
    patientsCareCardsStartWith1 = list.patientsCareCardsStartWith1;
    patientsCareCardsStartWith2 = list.patientsCareCardsStartWith2;
    patientsCareCardsStartWith3 = list.patientsCareCardsStartWith3;
    patientsCareCardsStartWith4 = list.patientsCareCardsStartWith4;
    patientsCareCardsStartWith5 = list.patientsCareCardsStartWith5;
    patientsCareCardsStartWith6 = list.patientsCareCardsStartWith6;
    patientsCareCardsStartWith7 = list.patientsCareCardsStartWith7;
    patientsCareCardsStartWith8 = list.patientsCareCardsStartWith8;
    patientsCareCardsStartWith9 = list.patientsCareCardsStartWith9;
}

List::~List() {
    delete patientsCareCardsStartWith0;
    delete patientsCareCardsStartWith1;
    delete patientsCareCardsStartWith2;
    delete patientsCareCardsStartWith3;
    delete patientsCareCardsStartWith4;
    delete patientsCareCardsStartWith5;
    delete patientsCareCardsStartWith6;
    delete patientsCareCardsStartWith7;
    delete patientsCareCardsStartWith8;
    delete patientsCareCardsStartWith9;
}

// Description: Returns the total element count currently stored in List.
int getElementCount() const {
    return elementCount;
}

// Description: Insert an element.
//              When "this" List is full, its data structure is expanded to accommodate
//              a new element. This is done unbeknown to the client code.
//              If the insertion is successful, true is returned otherwise, false is returned.
// Precondition: newElement must not already be in data collection.
// Postcondition: newElement inserted and the appropriate elementCount has been incremented.
bool insert(const Patient& newElement) {

}

// Description: Remove an element.
//              If the removal is successful, true is returned otherwise, false is returned.
// Postcondition: toBeRemoved is removed, the appropriate elementCount has been decremented.
bool remove( const Patient& toBeRemoved );

// Description: Remove all elements.
void removeAll();

// Description: Search for target element and returns a pointer to it if found,
//              otherwise, returns NULL.
Patient* search(const Patient& target);

// Description: Prints all n elements stored in List in sort order and does so in O(n).
void printList();

