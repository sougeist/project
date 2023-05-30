#include <iostream>
using namespace std;

// Класс узла дерева
class Node {
  public:
    char value;
    int count;
    Node* left;
    Node* right;
    
    Node(char val) {
        value = val;
        count = 1;
        left = nullptr;
        right = nullptr;
    }
};

// Функция создания идеально сбалансированного бинарного дерева
Node* createBalancedTree(char arr[], int start, int end) {
    if (start > end)
        return nullptr;

    int mid = (start + end) / 2;

    Node* node = new Node(arr[mid]);

    node->left = createBalancedTree(arr, start, mid - 1);

    node->right = createBalancedTree(arr, mid + 1, end);

    return node;
}

// Функция поиска количества элементов с заданным ключом
int countNodes(Node* node, char key) {
    if (node == nullptr)
        return 0;

    if (node->value == key)
        return node->count;

    if (node->value > key)
        return countNodes(node->left, key);

    return countNodes(node->right, key);
}

int main()
{
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;

    char arr[n];

    cout << "Введите элементы: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* root = createBalancedTree(arr, 0, n - 1);

    char key;
    cout << "Введите ключ для поиска: ";
    cin >> key;
    int cnt = countNodes(root, key);
    cout << "Количество элементов с ключом " << key << ": " << cnt << endl;

    return 0;
}