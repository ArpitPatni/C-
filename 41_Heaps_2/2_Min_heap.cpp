#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    char data;
    int count;
    node(char d, int c) : data(d), count(c) {}
};

class compare {
public:
    bool operator()(const node& a, const node& b) {
        return a.count < b.count; // '>' for min-heap
    }
};

int main() {
    priority_queue<node, vector<node>, compare> pq;

    // Existing nodes
    pq.push(node('a', 5));
    pq.push(node('b', 2));

    // Additional nodes as per user input
    pq.push(node('a', 6));
    pq.push(node('c', 3));
    pq.push(node('d', 8));
    pq.push(node('e', 1));
    pq.push(node('f', 4));
    pq.push(node('g', 7));
    pq.push(node('h', 9));

      // Displaying the nodes in priority order
    cout << "Nodes in priority order (min-heap based on count):" << endl;
    while (!pq.empty()) {
        node topNode = pq.top();
        pq.pop();
        cout << "Data: " << topNode.data << ", Count: " << topNode.count << endl;
    }

    return 0;
}