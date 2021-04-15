#include <iostream>;
#include <fstream>;
#include <string>

using namespace std;

struct SLLNode{
    string fileName;
    string fileVersion;
    SLLNode* next;
};

struct DLLNode{
    int commitNumber;
    SLLNode* head;
    DLLNode* prev;
    DLLNode* next;
};

class MiniGit{
    public:
        DLLNode* head;
        void initialize();
        void addFile(int commitNum);
        void removeNode(int commitNum);
        void commitChanges(int commitNum);
        void checkout();
};