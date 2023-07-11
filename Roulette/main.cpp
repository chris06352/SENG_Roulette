/*
 * main.cpp
 *
 *  Created on: 06.07.2023
 *      Author: fabia
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string.h>

class RouletteSpiel {
public:
    virtual bool gewonnen(int gewinnzahl) = 0;
    virtual ~RouletteSpiel() {}
};

class ZahlSpiel : public RouletteSpiel {
private:
    std::vector<int> zahlen;

public:
    ZahlSpiel(const std::vector<int>& z) : zahlen(z) {}

    bool gewonnen(int gewinnzahl) override {
        for (int zahl : zahlen) {
            if (zahl == gewinnzahl) {
                return true;
            }
        }
        return false;
    }
};


class FarbeSpiel : public RouletteSpiel {

private:

    int farbe;



public:

    FarbeSpiel(int f) : farbe(f) {}



    bool gewonnen(int gewinnzahl) override {

        return ((farbe == 2 && gewinnzahl % 2 == 1) || (farbe == 1 && gewinnzahl % 2 == 0));

    }

};


int main() {


    return 0;
}

