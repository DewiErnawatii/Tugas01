#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef int infotype;
typedef struct tNode *address;
typedef struct tNode{
infotype Info;
infotype akar;
infotype info_left;
infotype info_right;
address Left;
address Right;

};Node;


typedef address Tree;

#define Left(P) (P)->Left
#define Right(P)(P)->Right
#define Info(P) (P)->Info
#define akar(P) (P)->akar
#define info_left(P) (P)->info_left
#define info_right(P) (P)->info_right
#define Nil NULL


address Alokasi(infotype X, infotype h);
void CreateTree(Tree *T);
bool IsEmpty(Tree T);
void add_tree(Tree *T,infotype X, infotype h);
void Del_Tree(Tree *T, infotype X);
void Soal_1(Tree T);
void Soal_2(Tree T);
void soal_3(Tree T);
int soal_3_shadow(Tree T);
void Soal_4(Tree *T,infotype X,infotype h);
void soal_5(Tree *T);
void specification(Tree T);
void PrintInOrde(Tree T);
void PrintPreOrder(Tree T);
void PrintPostOrder(Tree T);
void Show(Tree T, infotype c);

#endif // HEADER_H_INCLUDED
