#pragma once
#include "Cout.h"


class   Cout {
protected:
    float espaceMachine;
    float sous30Jours;
    float caluleplix = 0;

public:
    Cout(float espaceMachine,float sous30Jours,float caluleplix,int* tab1[250]){
        this-> espaceMachine = espaceMachine;
        this-> sous30Jours = sous30Jours;
        this-> caluleplix = caluleplix;
    }
    virtual ~Cout() {}
    virtual void

};

class Location : public Cout {
public:
    void entrezEspaceMachine() {
        //(¢*30jours/m²)
        std::cout << " Entrez l'espace requis par la machine en metres-carres (m2)" << std::endl;
        std::cin >> espaceMachine;
        std::cout << " Entrez Un entier correspondant au cout en sous pour la location d'un metre-carre pour une periode de\n"
                     "30 jours" << std::endl;
        std::cin >> sous30Jours;

        caluleplix =((sous30Jours/100)/30*espaceMachine);
        std::cout << caluleplix << std::endl;


        // Libération de la mémoire.
        for (int i=0 ; i<sizeof(tab1) ; i++) {
            delete tab1[i];
        }
    }
};


class Electricite : public Cout {
public:
    void entrezEspaceMachine() {
        std::cout << " elect" << std::endl;
    }
};


class Eau : public Cout {
public:
    void entrezEspaceMachine() {
        std::cout << " agua" << std::endl;
    }