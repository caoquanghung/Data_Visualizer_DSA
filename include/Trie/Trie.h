﻿#pragma once
#include "GlobalVar.h"
#include <raylib.h>
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "LinkedList.h"

using namespace std;


//------------------
//Định dạng Trie Node
//---------------------

class TrieNode {
public:

    // pointer array for child nodes of each node
    map<char, TrieNode*> children;

    // Used for indicating ending of string
    bool isWord;

    //Used for drawing
    int subtreeSize;

    TrieNode();
};

//-----------------------
//      Function chinh
//----------------------
void InsertTrie(TrieNode*& root, const string& key);

bool FindTrie(TrieNode*& root, const string& key);

bool isEmpty(TrieNode* root);

TrieNode* DeleteTrie(TrieNode* root, const string& key, int depth = 0);

void InputFileTrie(const string& file_name, TrieNode*& root);

//Draw

void drawArrow(Vector2 start, Vector2 end, Color edgeRender);

void drawButtons();

void handleButtonsHover();

void drawBlinkingLines(const std::string& text, Rectangle rect, int& frameCounter);

void drawTextIn(const std::string& text, Rectangle rect, int& frameCounter);






