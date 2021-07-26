//
//  main.cpp
//  Blockchain
//
//  Created by Brian Fernandez on 12/19/20.
//

#include "Blockchain.h"
#include "shopping.h"
#include <iostream>
using namespace std;


int main() {
    int n = 0;
    Blockchain bChain = Blockchain(); // new instance

    do {
        int counter = 1;
        cout<<"Select an option!\n1.Go Shopping!\n2.View current blockchain\n";
        cout<<"3.Exit\n";
        cin>>n;

        switch (n) {
            case 1:
                bChain.AddBlock(Block(counter,selection()));
                counter++;
                break;
            case 2:
                bChain.ViewChain(bChain._vChain);
                //break;
                continue;
            case 3:
                exit(0);
            default:
                cout<<"Invalid selection, try again.\n";
        }
        
    } while (n !=3);

    return 0;
}

