#include<bits/stdc++.h>
  
using namespace std;
  
struct Node
{
    int key;
    struct Node *left, *right;
};
  
// Fungsi utilitas untuk membuat Node BST baru
struct Node *newNode(int item)
{
    struct Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// Menyimpan inorder traversal dari BST
// didalam arr[]
void storeSorted(Node *root, int arr[], int &i)
{
    if (root != NULL)
    {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}
  
/* Fungsi utilitas untuk menyisipkan Node yang baru
   dengan kunci yang diberikan di BST */
Node* insert(Node* node, int key)
{
    /* Jika tree bernilai kosong, return newNode */
    if (node == NULL) return newNode(key);
  
    /* jika tidak, ulangi proses pencarian tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
  
    /* return pointer Node */
    return node;
}
  
// Fungsi treeSort mengurutkan arr[0, ... n-1] dengan menggunakan Tree Sort
void treeSort(int arr[], int n)
{
    struct Node *root = NULL;
  
    // Mengkonstruksikan BST
    root = insert(root, arr[0]);
    for (int i=1; i<n; i++)
        root = insert(root, arr[i]);
  
    // Menyimpan inorder transversal dalam BST
    // ke dalam arr[]
    int i = 0;
    storeSorted(root, arr, i);
}
  
// Pengujian algoritma Tree Sort
int main()
{
    // Deklarasi dan Inisialisasi Array 
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    treeSort(arr, n);
  
        for (int i=0; i<n; i++)
       cout << arr[i] << " ";
  
    return 0;
}
