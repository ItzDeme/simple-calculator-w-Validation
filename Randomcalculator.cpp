// Randomcalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void addNumber();
void subNumber();
void multiNumber();
void diviNumber();
void pickYourOperator();
void pickYouNumberONE();
void pickYouNumberTWO();
double numberOne;
double numberTwo;
double numberThree;

int main()
{
    bool continueON = true;
    while (continueON){
        string useYesOrNo;
        cout << "Would you like to use the calculator Y/N: ";                       //makes sure the user wants to use the calculator. Validation, loops if wrong answer
        getline(cin, useYesOrNo);
        if (useYesOrNo == "Y" || useYesOrNo == "y" || useYesOrNo == "Yes" || useYesOrNo == "YES" || useYesOrNo == "yes") {
            pickYouNumberONE();
            pickYouNumberTWO();
            pickYourOperator();
        }
        else if (useYesOrNo == "N" || useYesOrNo == "n" || useYesOrNo == "No" || useYesOrNo == "NO") {
            continueON = false;
        }
        else {
            cout << "Please enter a correct option!" << endl;
            main();
        }
    
    }
}

void pickYourOperator() {
    string operatorType;
    cout << "What operator do you wish to use + - * / :";                           //asks for operator of choice, loops through function if wrong answer
   cin >> operatorType;
    if (operatorType == "+" || operatorType == "add" || operatorType == "ADD") {
        addNumber();
    }
    else if (operatorType == "-" || operatorType == "sub" || operatorType == "SUB" || operatorType == "subtract" || operatorType == "Subtract" || operatorType == "SUBTRACT" || operatorType == "minus" || operatorType == "Minus" || operatorType == "MINUS") {
        subNumber();
    }
    else if (operatorType == "/" || operatorType == "divide" || operatorType == "Divide" || operatorType == "DIVIDE") {
        diviNumber();
    }
    else if (operatorType == "*" || operatorType == "multiply" || operatorType == "Multiply" || operatorType == "MULTIPLY" || operatorType == "times" || operatorType == "Times" || operatorType == "TIMES") {
        multiNumber();
    }
    else {
        cout << "Please pick a correct operator." << endl;
        pickYourOperator();
    }
}

void pickYouNumberONE() {                                                          //asks user to pick a number also validate to make sure the input is a number. Loops if it is not.
    cout << "What is your first number: ";
    cin >> numberOne;
    while (!cin){
        cin.clear();
        cin.ignore();
        cout << "Enter an actual number: ";
        cin >> numberOne;
    } 
}

void pickYouNumberTWO() {                                                           //asks user to pick a number also validate to make sure the input is a number. Loops if it is not.
    cout << "What is your second number: ";
    cin >> numberTwo;
    while (!cin) {
        cin.clear();
        cin.ignore();
        cout << "Enter an actual number: ";
        cin >> numberTwo;
    }
}

void addNumber() {                                                                  //self explanatory does the mathematics 
    numberThree = numberOne + numberTwo;
    cout << numberOne << " + " << numberTwo << " is equal to " << numberThree << endl;
    system("pause");
}

void subNumber() {
    numberThree = numberOne - numberTwo;
    cout << numberOne << " - " << numberTwo << " is equal to " << numberThree << endl;
    system("pause");
}

void multiNumber() {
    numberThree = numberOne * numberTwo;
    cout << numberOne << " * " << numberTwo << " is equal to " << numberThree << endl;
    system("pause");
}

void diviNumber() {
    numberThree = numberOne / numberTwo;
    cout << numberOne << " / " << numberTwo << " is equal to " << numberThree << endl;
    system("pause");
}
