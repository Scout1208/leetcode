//
// Created by 李承彧 on 2023/3/18.
//

#ifndef LEETCODE_BROWSERHISTORY_H
#define LEETCODE_BROWSERHISTORY_H
class Node{
    string url;
    Node* backPage;
    Node* forwardPage;
    Node():currUrl(" "),backPage(nullptr),forwardPage(nullptr){}
};
class BrowserHistory {
private:
    Node* curr;
public:
    BrowserHistory(string homepage);

    void visit(string url);

    string back(int steps);

    string forward(int steps);
};


#endif //LEETCODE_BROWSERHISTORY_H
