/*
 * WICS.cpp
 * 
 * File Description: Uses List class and Patient class to
 *					 implement a walk-in clinic
 *					 patient system
 * Created on: May 28, 2017
 * Author: Harinderpal Khakh
 */

#include "Patient.h"
#include "List.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function Prototypes
string retrieveCareCard();
void addPatient(List * thePatients);
void removePatient(List * thePatients);
void searchForPatient(List * thePatients);
void modifyPatientRecord(List * thePatients);
void printAllPatients(List * thePatients);
void addPatient(List * thePatients);

string retrieveCareCard () {
    string cardNumber;

    cout << "Please enter the patient's care card number." << endl;
    getline(cin, cardNumber);

    while (cardNumber.length() != 10) {
		cout << "That is not a valid care card number." << endl;
        cout << "A care card number must consist of 10 digits." << endl;
		cout << "Please try again." << endl;
        getline(cin, cardNumber);
	}
	return cardNumber;
}

void addPatient(List * thePatients) {
    string theName;
    string theCareCard;
    string theAddress;
    string thePhone;
    string theEmail;

    cout << "Please enter the patient's name or press enter to add it later." << endl;
    cin.ignore();
    getline (cin, theName);

    theCareCard = retrieveCareCard();

    Patient* thePatient = new Patient(theCareCard);

	if (theName.length() != 0)
        thePatient->setName(theName);

    cout << "Please enter the patient's address or press enter to add it later." << endl;
    getline(cin, theAddress);

	if (theAddress.length() != 0)
        thePatient->setAddress(theAddress);

    cout << "Please enter the patient's phone number or press enter to add it later." << endl;
    getline(cin, thePhone);

	if (thePhone.length() != 0)
        thePatient->setPhone(thePhone);

    cout << "Please enter the patient's email address or press enter to add it later." << endl;
    getline(cin, theEmail);

	if (theEmail.length() != 0)
        thePatient->setEmail(theEmail);

    if (thePatients->insert(*thePatient)) {
        cout << endl << "The following patient was added." << endl;
        thePatient->printPatient();
        cout << endl;
    }
    else {
        cout << "Patient could not be added." << endl;
        delete thePatient;
    }
}

void removePatient(List * thePatients) {
    /*
	bool removed = false;

	if (thePatients->getElementCount() == 0) {
        cout << "Cannot remove patients as there are no patients in the system" << endl;
    } else {
        char help = '0';
		string careCardToRemove;
		
        cout << "To remove a patient, you will need their care card number.";
        cout << "If you do not know the number, press h to see all the patients' details.";
        cout << "Otherwise, press Enter." << endl;
        cin.ignore();
        cin >> help;

        if (help == 'h') {
			printAllPatients(thePatients);
        }

        careCardToRemove = retrieveCareCard();

        Patient* patientToBeRemoved = new Patient(careCardToRemove);
        patientToBeRemoved = thePatients->search(*patientToBeRemoved);

        thePatients->remove(*patientToBeRemoved);

        delete patientToBeRemoved;

		if (removed) {
			cout << "The patient was successfully removed." << endl;
		} else {
			cout << "The patient could not be removed." << endl;
		}
	}
    */
}

void searchForPatient(List * thePatients) {

}

void modifyPatientRecord(List * thePatients) {
    /*
    // Patient* patientToModify
    if (thePatients->getElementCount() == 0) {
        cout << "Cannot modify patients as there are no patients in the system" << endl;
    } else {
        char help = '0';
        string careCardToModify;

        cout << "To modify a patient, you will need their care card number.";
        cout << "If you do not know the number, press h to see all the patients' details.";
        cout << "Otherwise, press Enter." << endl;
        cin.ignore();
        cin >> help;

        if (help == 'h') {
            printAllPatients(thePatients);
        }

        careCardToModify = retrieveCareCard();

        Patient* patientToBeModified = new Patient(careCardToModify);
        patientToBeModified = thePatients->search(*patientToBeModified);

        bool finished = false;
        char property = 0;

        while (!finished) {
            cout << "To modify the patient's name, enter n" << endl;
            cout << "To modify the patient's address, enter a" << endl;
            cout << "To modify the patient's phone number, enter p" << endl;
            cout << "To modify the patient's email address, enter e" << endl;
            cin >> property;
            cout << endl;

            property = tolower(property);

            switch (property) {
                case 'n': break;
                case 'a': break;
                case 'p': break;
                case 'e': break;
                default: cout << "Invalid command" << endl; break;
            }
        }
        */

}

// Description: Prints all patients currently in the system
// Postcondition: All patients will be printed in ascending
//                of care card number
void printAllPatients(List * thePatients) {
    thePatients->printList();
    cout << endl;
}

int main() {
	List* patients = new List();

    cout << endl << "Welcome to the Walk-in Clinic Patient System" << endl;
	
	bool done = false;
	char command = 0;

    while (!done) {
        cout << "To enter a new patient into the system, enter n" << endl;
        cout << "To remove a patient from the system, enter r" << endl;
        cout << "To search for a patient, enter s" << endl;
        cout << "To modify a patient's record, enter m" << endl;
        cout << "To print all patients by ascending order of care card numbers, enter p" << endl;
        cout << "To leave the program, enter x" << endl;
        cin >> command;
        cout << endl;

        command = tolower(command);

        switch (command) {
            case 'n': addPatient(patients); break;
            case 'r': removePatient(patients); break;
            case 's': searchForPatient(patients); break;
            case 'm': modifyPatientRecord(patients); break;
            case 'p': printAllPatients(patients); break;
            case 'x': done = true; break;
            default: cout << "Invalid command" << endl; break;
        }
    }
	return 0;
}
