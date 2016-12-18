/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: greg
 *
 * Created on December 18, 2016, 3:56 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Hello Crazy and Cruel World\n";
    for (int i=1; i<argc; i++) {
        cout << "Parameter " << i << " is : " << argv[i] << "\n";
    }
    if (argc < 2) {
        cout << "** No Parameters given **";
    }
    return 0;
}

