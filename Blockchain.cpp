//
//  Blockchain.cpp
//  Blockchain
//
//  Created by Brian Fernandez on 12/19/20.
//

#include "Blockchain.h"
#include <iostream>
Blockchain::Blockchain()
{
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 3;
}

void Blockchain::AddBlock(Block bNew)
{
    bNew.sPrevHash = _GetLastBlock().sHash;
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const
{
    return _vChain.back();
}

void Blockchain::ViewChain(vector<Block>_vChain)
{
    cout<<"You're now viewing the current blockchain.\n";
    for (int i =0; i <= _vChain.size()-1 ; i++) {
        cout<<"Block #"<<i+1<<": ";
        cout<< _vChain[i].sHash<<endl;
    }
}

