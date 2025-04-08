#pragma once
#include "GlobalVar.h"
#include "TextBox.h"
#include "button.h"
#include "Trie.h"

//Interface in LinkList.h


//--------------------------------
//			Trie
//-------------------------------

//class Trie {
//private:
//	IState* mCurrent;
//	IState* mIdle;
//	IState* mInsert;
//	IState* mFind;
//	IState* mRemove;
//	IState* mClear;
//	TrieNode* root;
//
//public:
//
//
//
//};
//
//---------------------------
//		C�c State
//---------------------------
//
//class InsertState : public IState {
//
//};
//
//class FindState : public IState {
//
//};
//
//class RemoveState : public IState {
//	
//};
//
//class ClearState : public IState {
//
//};

class Trie {
private:
	vector<pair<Vector2, Vector2>> Edges;
	vector < pair<pair<Vector2, char>, Color>> Nodes;
public:
	enum FunctionNumber {
		Input = 1,
	};

	//Trie root
	TrieNode* root;
	//function variables
	int letterCount = 0;
	const int MAX_INPUT_CHARS = 15;

	string textIn, word;
	int frameCounter = 0;

	int curFunct = 0;

	//draw variables
	const float spread = 55;

	Rectangle inputRect = { buttonVar::buttonIns.rect.x + 130,buttonVar::buttonIns.rect.y,130, static_cast<float>(button::sizeH) };


	//Trie
	Trie();
	
	void Insert(const string& c);
	
	//Utility
	void drawNodeTrie(Vector2 pos, const char& character, Color colorNode,float radius);

	string handleTypeBox(Rectangle rect);

	void drawTypeBox(Rectangle rect);

	void HandleButtonClickTrie();

	//Visualizer
	int CalculateSubtreeSize(TrieNode* node);

	void MarkNodesEdges(TrieNode* root, float x, float y, float spread, int depth);

	void Visualize(TrieNode* root);

	void Handle();

	void Draw();
};


namespace Trie_Display {
	inline Trie* TrieInstance = nullptr;
	void Display();
}
