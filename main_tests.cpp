//
// Created by User on 8/7/2020.
//

#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <cctype>

//#include "Gcalc.h"


using namespace std;


enum name {ALON, AMIT, AVI, ROTEM};

int main(){
    int i;
    name what = ALON;
    for(i=0; i<4;++i){
        if(what==ALON){
            cout << "ALON!" << endl;
            what = AMIT;
        }
        else{
            cout << "NOT ALON..." << endl;
        }
    }
    return 0;
}


/*
void shellGcalc();
void batchGcalc();

bool isValid(string::iterator c);


main() {
    shell_gcalc();
    return 0;
}





void shell_gcalc(){
    int opcode = 0;
    // opcode == 0 -> shell
    // opcode == 2 -> txt
    if(opcode == 0){

        string input;
        cin >> input;


        for(string::iterator it = input.begin(); it != input.end(); ++it){
            if(isValid(it)){
                cout << *it << " is valid." << endl;
            }
        }

        int x = 0;
        while(x >= 0){
            cout << "Gcalc> ";
            cin >> x;
            cout << "x+7 is now: " << x+7 << endl;
        }

    }
    if(opcode == 2){
        // txt
    }
}

bool isValid(string::iterator c){
    if(*c < 'd'){
        return true;
    }
    return false;
}











/*




























/*

class Vertex {
public:
    int num;
    explicit Vertex(int num) : num(num) {};
    bool operator<(const Vertex& v) const {
        return this->num < v.num;
    }
};

main() {

    Vertex a(1);
    Vertex b(8);
    Vertex c(3);
    Vertex d(8);

    std::set<Vertex> ab = {a, b};
    std::set<Vertex> cd = {c, d};

    std::set<Vertex> s;
    std::set_difference(ab.begin(), ab.end(),
                   cd.begin(), cd.end(),
                   std::inserter(s, s.begin()));

    for (auto const &e: s) {
        std::cout << e.num << ' ';
    }

    //shell_gcalc();
    return 0;
}

*/





