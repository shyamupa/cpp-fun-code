/*
 * myhuffman.cpp
 *
 *  Created on: Sep 10, 2014
 *      Author: Shyam
 */

#include<stdio.h>
#include <queue>
#include <iostream>

typedef struct Word {
	char* word;
	int count;
	char* code;
	struct Word* left;
	struct Word* right;
} Word;

class CompareWord {
public:
	bool operator()(Word* t1, Word* t2) // Returns true if t1 is earlier than t2 (from left to right)
			{
		if (t1->count > t2->count)	// we want lowest priority to be on top
			return true;
		else
			return false;
	}
};

std::priority_queue<Word*, std::vector<Word*>, CompareWord> huff_q;

void addWord(char* word, int c) {
	int length = strlen(word) + 1;
	Word* w = (Word*) malloc(sizeof(Word));
	w->word = (char *) calloc(length, sizeof(char));
	strcpy(w->word, word);
	w->count = c;
	huff_q.push(w);
}

void huffman() {
	using namespace std;
	char tmp[100];
	int length;
	while (1) {
		if (huff_q.size() > 1) {
			Word* word1 = huff_q.top();
			huff_q.pop();
			cout << word1->word << word1->count << endl;
			Word* word2 = huff_q.top();
			huff_q.pop();
			cout << word2->word << word2->count << endl;
			length = strlen(word1->word) + strlen(word2->word) + 1;
			Word* w = (Word*) malloc(sizeof(Word));
			w->word = (char *) calloc(length, sizeof(char));
			strcpy(w->word, word1->word);
			strcat(w->word, word2->word);
			w->count = word2->count + word1->count;
			huff_q.push(w);
		} else {
			break;
		}
	}
	printf("FINALLY\n");

//	while (!huff_q.empty()) {
//		Word* tmp = huff_q.top();
//		huff_q.pop();
//		cout << tmp->word << endl;
//		cout << tmp->count << endl;
//	}
}
int main(int argc, char **argv) {
	using namespace std;
	freopen("input.txt", "r", stdin);
	char tmp[100];
	int c;
	int n;
	cin >> n;
	cout << n << endl;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		cin >> c;
		addWord(tmp, c);
	}
	huffman();

}
