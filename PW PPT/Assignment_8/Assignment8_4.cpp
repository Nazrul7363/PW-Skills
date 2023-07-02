#include <iostream>
#include <sstream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* str2tree(string s) {
    if (s.empty()) {
        return nullptr;
    }

    int i = 0;
    while (i < s.length() && (isdigit(s[i]) || s[i] == '-')) {
        i++;
    }

    int val = stoi(s.substr(0, i));
    TreeNode* root = new TreeNode(val);

    if (i < s.length()) {
        int count = 0;
        int j = i;
        while (j < s.length()) {
            if (s[j] == '(') {
                count++;
            } else if (s[j] == ')') {
                count--;
            }

            if (count == 0) {
                break;
            }
            j++;
        }

        root->left = str2tree(s.substr(i + 1, j - i - 1));

        if (j + 1 < s.length()) {
            root->right = str2tree(s.substr(j + 2, s.length() - j - 3));
        }
    }

    return root;
}

void printTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    string s = "4(2(3)(1))(6(5))";
    TreeNode* root = str2tree(s);

    
    printTree(root);
    cout << endl;

    return 0;
}
