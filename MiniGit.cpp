#include "MiniGit.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

void MiniGit::addFile(int commitNum){
    ifstream f_1;
    string fileName;
    while(!f_1.is_open()){
        cout << "Enter the name of the file to be added: " << endl;
        getline(cin, fileName);
        f_1.open(fileName);
    }
    DLLNode* presDLL = head;
    int i = 0;
    while(presDLL != NULL && i < commitNum){
        i++;
        presDLL = presDLL->next;
    }
    if(presDLL == NULL){
        cout << "wrong commit #" << endl;
        return;
    }
    SLLNode *searcherSLL = presDLL->head;
    SLLNode *presSLL;
    presSLL->fileName = fileName;
    while(searcherSLL != NULL){
        if(searcherSLL->fileName == fileName){
            cout << "file already exists in Singly Linked List" << endl;
            return;
        }
        searcherSLL = searcherSLL->next;
    }

}
