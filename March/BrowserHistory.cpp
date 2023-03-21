//
// Created by 李承彧 on 2023/3/18.
//

#include "BrowserHistory.h"
#include <string>
using namespace std;
BrowserHistory::BrowserHistory(string homepage) {
    curr = new Node();
    curr->url = homepage;
}

void BrowserHistory::visit(string url) {
    Node* node = Node();
    curr->url = url;
    curr->forwardPage = node;
    node->backPage = curr;
    curr = curr->forwardPage;
}

string BrowserHistory::back(int steps) {
    while(!curr)
    {
        curr = curr->backPage;
        steps--;
        if(steps == 0)
        {
            break;
        }
    }
    return curr->url;
}

string BrowserHistory::forward(int steps) {
    while(!curr)
    {
        curr = curr->forwardPage;
        steps--;
        if(steps == 0)
        {
            break;
        }
    }
    return curr->url;
}