class dll {
public:
    string data;
    dll* next;
    dll* prev;

    dll(string val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class BrowserHistory {
public:
    dll* root;
    dll* curr;

    BrowserHistory(string homepage) {
        root = new dll(homepage);
        curr = root;
    }
    
    void visit(string url) {
        dll* node = new dll(url);
        curr->next = node;
        node->prev = curr;
        curr = node;
    }
    
    string back(int steps) {
        while (steps > 0 && curr->prev) {
            curr = curr->prev;
            steps--;
        }
        return curr->data;
    }
    
    string forward(int steps) {
        while (steps > 0 && curr->next) {
            curr = curr->next;
            steps--;
        }
        return curr->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
