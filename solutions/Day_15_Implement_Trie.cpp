//pprockys;
struct TrieNode {
    char data;
    bool isWord;
    unordered_map<char, TrieNode*> children;

    TrieNode( int d ) : data(d), isWord(false) {} 
};

class Trie {
    TrieNode *root;
public:
    Trie() { root = new TrieNode( -1 ); }
    
    void insert( string word ) {
        TrieNode *curr = root;
        for( char c : word ) {
            if( curr->children.find(c) == curr->children.end() )
                curr->children[c] = new TrieNode(c);
            curr = curr->children[c];
        }
        curr->isWord = true;
    }
	
    bool search( string word ) {
        TrieNode *curr = root;
        for( char c : word ) {
            if( curr->children.find(c) == curr->children.end() )
                return false;
            curr = curr->children[c];
        }
        return curr->isWord;
    }
    bool startsWith( string prefix ) {
        TrieNode *curr = root;
        for( char c : prefix ) {
            if( curr->children.find(c) == curr->children.end() )
                return false;
            curr = curr->children[c];
        }
        return true;
    }
};
