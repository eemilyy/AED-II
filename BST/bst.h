#ifndef BST_H
#define BST_H

typedef struct no{
    int chave;
    struct no* esq;
    struct no* dir;
}no;

//Op 1
no* inserir(no* raiz, int chave); //OK
//Op 2
void preorder(no* raiz);  //OK
//Op 3
void inorder(no* raiz); //OK
//Op 4
void posorder(no* raiz); //OK
//Op 5
no* remover(no* raiz, int chave); //OK
//Op 6
no* maior(no* raiz); //OK
//Op 7
no* menor(no* raiz); //OK
//Op 8
int altura(no* raiz); //OK
//Op 9
int quantidade_elementos(no* raiz); // OK
//Op 10
int existe(no* raiz, int chave); //Retornar 1(existe) ou 0(não existe)
//Op 11
no* predecessor(no* raiz, int chave); //OK
//Op 12
no* sucessor(no* raiz, int chave); //OK

#endif
