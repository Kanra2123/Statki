#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cstdio>
#include <cctype>
#include <windows.h>
#include <cmath>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;
int const maks =100;

void czytajT(int T[maks],int n)
{
   int i;
    for(i=0;i<n;i++ )
    {
        cout<<"Podaj Liczbe"<<endl;
        cin>>T[i];
    }
}

void piszT(int T[maks],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<T[i]<<" , ";
    }
}

void losT (int T[maks],int n)
{
    int k, i;
    for(i=0;i<n;i++)
        {
            k=1+rand()%(100);
            T[i]=k;
        }

}

void czytajT2(int T[maks][maks],int n, int m)
{
   int i,j;
    for(i=0;i<n;i++ )
    {
        for(j=0;j<m;j++)
        {cout<<"Podaj Liczbe"<<endl;
        cin>>T[i][j];}
    }
}

void piszT2(int T[maks][maks],int n, int m)
{
    int i,j,a;
    for (i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {

            cout.width(2);

            switch (T[i][j])
            {
            case 1:

                    cout<< "x";
                    break;

            case 2:

                    cout<< "x";
                    break;

            case 3:

                    cout<< "x";
                    break;

            case 4:

                    cout<< "x";
                    break;

            case 5:

                    cout<< ".";
                    break;

            case 7:

                    cout<< "o";
                    break;

            case 8:

                    cout<< "-";
                    break;

            case 0:

                    cout<< ".";
                    break;

            }



        }
        cout<<endl;
    }
}

void losT2 (int T[maks][maks],int n, int m)
{
    int k, i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                k=1+rand()%(100);
                T[i][j]=k;
            }
        }

}
void zerujT2(int T[maks][maks],int n, int m)
{
   int i,j;
    for(i=0;i<n;i++ )
    {
        for(j=0;j<m;j++)
        {T[i][j]=0;}
    }
}

void los4(int T[maks][maks])
{
    int i,j;
    int k=rand()%(2);
    if(k==0)
    {
        int x=1+rand()%(7);
        int y=1+rand()%(10);
        for(i=x-1;i<=x+4;i++)
        {
            for(j=y-1;j<y+2;j++)
            {
                T[i][j]=5;
            }
        }
        T[x][y]=4;
        T[x+1][y]=4;
        T[x+2][y]=4;
        T[x+3][y]=4;
    }
    else
    {
        int x=1+rand()%(10);
        int y=1+rand()%(7);
         for(i=x-1;i<=x+1;i++)
        {
            for(j=y-1;j<=y+4;j ++)
            {
                T[i][j]=5;
            }
        }
        T[x][y]=4;
        T[x][y+1]=4;
        T[x][y+2]=4;
        T[x][y+3]=4;
    }
}

void los3(int T[maks][maks])
{
    int i,j,x,y;
    int k=rand()%(2);
    if(k==0)
    {
        do
        {
             x=1+rand()%(8);
             y=1+rand()%(10);
        }
        while(!(T[x][y]==0&&T[x+1][y]==0&&T[x+2][y]==0));
        for(i=x-1;i<=x+3;i++)
        {
            for(j=y-1;j<=y+2;j++)
            {
                T[i][j]=5;
            }
        }
        T[x][y]=3;
        T[x+1][y]=3;
        T[x+2][y]=3;

    }
    else
    {
        do
        {
             x=1+rand()%(10);
             y=1+rand()%(8);
        }
         while(!(T[x][y]==0&&T[x][y+1]==0&&T[x][y+2]==0));
         for(i=x-1;i<x+2;i++)
         {
            for(j=y-1;j<=y+3;j ++)
            {
                T[i][j]=5;
            }
         }
        T[x][y]=3;
        T[x][y+1]=3;
        T[x][y+2]=3;

    }
}

void los2(int T[maks][maks])
{
    int i,j,x,y;
    int k=rand()%(2);
    if(k==0)
    {
        do
        {
             x=1+rand()%(9);
             y=1+rand()%(10);
        }
        while(!(T[x][y]==0&&T[x+1][y]==0));
        for(i=x-1;i<=x+2;i++)
        {
            for(j=y-1;j<=y+2;j++)
            {
                T[i][j]=5;
            }
        }
        T[x][y]=2;
        T[x+1][y]=2;


    }
    else
    {
        do
        {
             x=1+rand()%(10);
             y=1+rand()%(9);
        }
         while(!(T[x][y]==0&&T[x][y+1]==0));
         for(i=x-1;i<x+2;i++)
         {
            for(j=y-1;j<=y+2;j ++)
            {
                T[i][j]=5;
            }
         }
        T[x][y]=2;
        T[x][y+1]=2;


    }
}

void los1(int T[maks][maks])
{
    int i,j,x,y;

        do
        {
             x=1+rand()%(10);
             y=1+rand()%(10);
        }
        while(!(T[x][y]==0));
        for(i=x-1;i<=x+2;i++)
        {
            for(j=y-1;j<=y+2;j++)
            {
                T[i][j]=5;
            }
        }
        T[x][y]=1;
}

void strzelajG(int T[maks][maks])
{
    int x,y;
    cout<<"Gdzie chcesz strrzelic? (y,x)"<<endl;
    cin>>x;
    cin>>y;
    if(T[x][y]==0||T[x][y]==5||T[x][y]==7)
    {
        T[x][y]=7;
    }
    else
    {
        T[x][y]=8;
    }
}
void strzelajK(int T[maks][maks])
{
    int x,y,a;

    x=1+rand()%(10);
    y=1+rand()%(10);
    a=T[x][y];
    if(a==0||a==5||a==7)
    {
        T[x][y]=7;
    }
    else
    {
        T[x][y]=8;
    }
}

int sprawdz(int T[maks][maks],int n,int m)
{
   int i,j,k;
   k=0;
    for(i=0;i<n;i++ )
    {
        for(j=0;j<m;j++)
        {
            if(T[i][j]>=1&&T[i][j]<=4)
            {
                k=k+1;
            }
        }
    }
    return k;
}

void zapis(int K[maks][maks],int G[maks][maks], int n, int m)
{
    int i,j;
    ofstream plik;
    plik.open ("plik.txt");
    for(i=0;i<=n;i++ )
    {
        for(j=0;j<=m;j++)
        {
            plik<<K[i][j]<<endl;
            plik<<G[i][j]<<endl;
        }
    }

}

void odczytaj(int K[maks][maks],int G[maks][maks], int n, int m)
{
    ifstream plik
}

int main()
{
   int p,n,i,m,k;

  int K [maks][maks],G [maks][maks];
  cout<<"chcesz: "<<endl<<" Grac od nowa: 1 "<<endl<<" Wczytac gre: 2"<<endl;

	srand(time(NULL));
	n=11;
	m=11;
    zerujT2(K,n,m);
   zerujT2(G,n,m);
   los4(K);
   los4(G);

    los3(K);
   los3(G);
   los3(K);
   los3(G);

    los2(K);
   los2(G);
   los2(K);
   los2(G);
   los2(K);
   los2(G);

    los1(K);
   los1(G);
   los1(K);
   los1(G);
   los1(K);
   los1(G);
   los1(K);
   los1(G);
   do
   {
        piszT2(K,n,m);
        cout<<endl;
        piszT2(G,n,m);
        cout<<endl;

       strzelajG(G);
       strzelajK(K);
       zapis(K,G,n,m);

        piszT2(K,n,m);
        cout<<endl;
        piszT2(G,n,m);
        k=sprawdz(G,n,m);
        if(k==0)
        {
            cout<<"Zbiles wszystkie statki!"<<endl;
        }
        else
        {
            cout<<"pozostalo "<<k<<" pol zajetych przez statki"<<endl;
        }
        cout<< "Czy chcesz grac dalej? Jesli tak, macisnij 1"<<endl;
        cin>>p;
   }
   while(p==1);


    return 0;
}
