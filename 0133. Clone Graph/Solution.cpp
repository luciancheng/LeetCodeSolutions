/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return NULL;
        int initVal= node->val;
        Node * newGraph = new Node(initVal);
        unordered_map<int, Node*> newAdj;
        unordered_set<int> visited;
        dfs(node, newAdj, visited);
        return newAdj[initVal];
    }

    void dfs(Node * ogNode, unordered_map<int, Node*> & newAdj, unordered_set<int> & visited) {
        int curVal = ogNode->val;
        if (visited.count(curVal) != 0) return;

        visited.insert(curVal);

        if (newAdj.count(curVal) == 0) {
            newAdj[curVal] = new Node(curVal);
        }

        for (const auto & node : ogNode->neighbors) {
            int nodeval = node->val;
            if (newAdj.count(nodeval) == 0) {
                newAdj[nodeval] = new Node(nodeval);
            }
            newAdj[curVal]->neighbors.push_back(newAdj[nodeval]);
            dfs(node, newAdj, visited);
        }
    }
};
