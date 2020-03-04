#include"header.h"


address Alokasi(infotype X, infotype h)
{
    address P=(address)malloc(sizeof(Node));
    if(P!=Nil)
    {
        Info(P)=X;
        Left(P)=Nil;
        Right(P)=Nil;
        akar(P)=h;
        info_left(P)=h;
        info_right(P)=h;
    }
}
void CreateTree(Tree *T)
{
    *T=Nil;
}
bool IsEmpty(Tree T)
{
    return (T=Nil);
}
void add_tree(Tree *T,infotype X, infotype h)
{
    Tree P=*T;
    if(IsEmpty(*T))
    {
        *T=Alokasi(X,h);
        info_left(*T)=h;
        info_right(*T)=h;
    }
    else
    {
        if(X<Info(P))
        {
            if(info_left(P)<X)
            {
                info_left(P)=X;
            }
            add_tree(&(Left(*T)),X,h);
        }
        if(X>Info(P))
        {
            if(info_right(P)>X)
            {
                info_right(P)=X;
            }
            add_tree(&(Right(*T)),X,h);
        }
    }
}
void Del_Tree(Tree *T, infotype X)
{
    Tree P=*T;
    if(IsEmpty(*T))
    {
        *T=Nil;

    }
    else if(X<Info(P))
    {
         if(X<Info(P))
    {
     Del_Tree(&(Left(*T)),X);
    }
    if(X>Info(P))
    {
        Del_Tree(&(Right(*T)),X);
    }
}
}
void PrintInOrde(Tree T)
{
    if(T!=Nil)
    {
         PrintInOrde(Left(T));
        printf("%d",Info(T));

        PrintInOrde(Right(T));
    }
}
void PrintPreOrder(Tree T)
{
     printf("%d",Info(T));
        PrintPreOrder(Left(T));
        PrintPreOrder(Right(T));
}
void PrintPostOrder(Tree T)
{
     PrintPostOrder(Left(T));
    PrintPostOrder(Right(T));
    printf("%d",Info(T));

}
void Soal_1(Tree T)
{
    if(T!=Nil)
    {
        if(Info(T)%2!=0)
        {
             printf("%d",Info(T));
        }
        Soal_1(Left(T));
        Soal_1(Right(T));

    }
}
void Soal_2(Tree T)
{
    if(T!=Nil)
    {
        Soal_2(Left(T));
        Soal_2(Right(T));
        if(Right(T)!=0)
        {
            printf("%d",Info(T));
        }
    }
}
int soal_3_shadow(Tree T)
{
    if(T!=Nil)
    {
        return(1+soal_3_shadow(Left(T)));
    }
}
void soal_3(Tree T)
{
    printf("%d",soal_3_shadow(T));
}

void Soal_4(Tree *T,infotype X,infotype h)
{
    Tree P=*T;
    if(IsEmpty(*T)){

    }
    else
    {
        if(X<Info(P))
           {
               if(info_left(P)<X)
               {
                   info_left(P)=X;
               }
               Soal_4(&(Left(*T)),X,h);


           }
           if(X<=Info(P)&& Left(P)==Nil && Right(P)==Nil)
           {
               Tree z;
               z=Alokasi(X,h);
               info_left(z)=h;
               info_right(z)=h;
               Left(P)=z;
           }
           if(X>Info(P))
           {
              if(info_right(P)>X)
              {
                  info_right(P)=X;
              }
              Soal_4(&(Right(*T)),X,h);
           }
    }
}
void soal_5(Tree *T)
{
    if(*T!=Nil)
    {
        if(Right(Right(*T))==Nil)
        {
            address Q=Right(*T);
            Right(*T)=Nil;
            free(Q);
        }
        else

        {
            soal_5(&(Right(*T)));
        }
    }
}


void Show(Tree T, infotype c)
{
    PrintPreOrder(T);
   PrintInOrde(T);
   PrintPostOrder(T);

}
