/*
 * mikolov-huffman.cpp
 *
 *  Created on: Sep 10, 2014
 *      Author: Shyam
 */




struct vocab_word {
	long long cn;
	int *point;
	char *word, *code, codelen;
};
int vocab_size=10;
int MAX_STRING=100;
int AddWordToVocab(char *word) {
	unsigned int hash, length = strlen(word) + 1;
	  if (length > MAX_STRING) length = MAX_STRING;
	  vocab[vocab_size].word = (char *)calloc(length, sizeof(char));
	  strcpy(vocab[vocab_size].word, word);
	  vocab[vocab_size].cn = 0;
	  vocab_size++;
}
int MAX_CODE_LENGTH = 100;
struct vocab_word *vocab;

void CreateBinaryTree() {
	long long vocab_size;
	long long a, b, i, min1i, min2i, pos1, pos2, point[MAX_CODE_LENGTH];
	char code[MAX_CODE_LENGTH];
	long long *count = (long long *) calloc(vocab_size * 2 + 1,
			sizeof(long long));
	long long *binary = (long long *) calloc(vocab_size * 2 + 1,
			sizeof(long long));
	long long *parent_node = (long long *) calloc(vocab_size * 2 + 1,
			sizeof(long long));
	for (a = 0; a < vocab_size; a++)
		count[a] = vocab[a].cn;
	for (a = vocab_size; a < vocab_size * 2; a++)
		count[a] = 1e15;
	pos1 = vocab_size - 1;
	pos2 = vocab_size;
	// Following algorithm constructs the Huffman tree by adding one node at a time
	for (a = 0; a < vocab_size - 1; a++) {
		// First, find two smallest nodes 'min1, min2'
		if (pos1 >= 0) {
			if (count[pos1] < count[pos2]) {
				min1i = pos1;
				pos1--;
			} else {
				min1i = pos2;
				pos2++;
			}
		} else {
			min1i = pos2;
			pos2++;
		}
		if (pos1 >= 0) {
			if (count[pos1] < count[pos2]) {
				min2i = pos1;
				pos1--;
			} else {
				min2i = pos2;
				pos2++;
			}
		} else {
			min2i = pos2;
			pos2++;
		}
		count[vocab_size + a] = count[min1i] + count[min2i];
		parent_node[min1i] = vocab_size + a;
		parent_node[min2i] = vocab_size + a;
		binary[min2i] = 1;
	}
	// Now assign binary code to each vocabulary word
	for (a = 0; a < vocab_size; a++) {
		b = a;
		i = 0;
		while (1) {
			code[i] = binary[b];
			point[i] = b;
			i++;
			b = parent_node[b];
			if (b == vocab_size * 2 - 2)
				break;
		}
		vocab[a].codelen = i;
		vocab[a].point[0] = vocab_size - 2;
		for (b = 0; b < i; b++) {
			vocab[a].code[i - b - 1] = code[b];
			vocab[a].point[i - b] = point[b] - vocab_size;
		}
	}
	free(count);
	free(binary);
	free(parent_node);
}
