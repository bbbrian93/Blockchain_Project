//
//  Blockchain.h
//  Blockchain
//
//  Created by Brian Fernandez on 12/19/20.
//

#ifndef TESTCHAIN_BLOCKCHAIN_H
#define TESTCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain(); //constructor

    void AddBlock(Block bNew); //create and add block
    vector<Block>_vChain; // the vector chain for the blocks
    void ViewChain(vector<Block>_vChain);
private:
    uint32_t _nDifficulty; //nonce


    Block _GetLastBlock() const;
};

#endif //TESTCHAIN_BLOCKCHAIN_H
