//
//  Block.cpp
//  Blockchain
//
//  Created by Brian Fernandez on 12/19/20.
//

#include "Block.h"
#include "sha256.h"

Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn)
{
    _nNonce = 0;
    _tTime = time(nullptr);

    sHash = _CalculateHash();
}

void Block::MineBlock(uint32_t nDifficulty)
{
    char cstr[nDifficulty + 1]; //creates an array of chars with +1 difficulty
    for (uint32_t i = 0; i < nDifficulty; ++i)
    {
        cstr[i] = '0'; //fills array with zero
    }
    cstr[nDifficulty] = '\0'; //last index is a sentinel

    string str(cstr); //creates string of the char array

    do
    {
        _nNonce++; //counter
        sHash = _CalculateHash(); //hashes the string
    }
    while (sHash.substr(0, nDifficulty) != str); //confirms that the hash from start index to nonce index is not a set of zeros for security reasons

    cout << "Block mined: " << sHash << endl;
}

inline string Block::_CalculateHash() const
{
    stringstream ss; //input/output functions on strings set on stream
    ss << _nIndex << sPrevHash << _tTime << _sData << _nNonce; // 'ss' takes in variables so the sha256 function can hash it

    return sha256(ss.str());
}
