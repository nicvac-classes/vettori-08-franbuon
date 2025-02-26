#include <iostream>
using namespace std;

int main() {
    int N, i;
    cout<<"Quanti sono gli atleti?"<<endl;
    cin>>N;
    string nomi[N], nazioni[N];
    float tempi[N];
    i=0;
    while(i<N)
    {
        cout<<"Come ti chiami?"<<endl;
        cin>>nomi[i];
        cout<<"Di che nazione sei?"<<endl;
        cin>>nazioni[i];
        cout<<"Che tempo hai fatto?"<<endl;
        cin>>tempi[i];
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout<<"Il "<<i+1<<"° atleta si chiama "<<nomi[i]<<", viene dall'/dalla "<<nazioni[i]<<" e il suo tempo è "<<tempi[i]<<"s"<<endl;
        i=i+1;
    }
    int imin, imax;
    float tempomin, tempomax;
    imin=0;
    tempomin=tempi[imin];
    i=0;
    while(i<N)
    {
        if(tempi[i]<tempomin)
        {
            tempomin=tempi[i];
            imin=i;
        }
        i=i+1;
    }
    cout<<"Il "<<imin+1<<"° atleta, di nome "<<nomi[imin]<<" proveniente da/dall' "<<nazioni[imin]<<" e che ha avuto un tempo di "<<tempi[imin]<<"s, ha vinto la gara!"<<endl;
    imax=0;
    tempomax=tempi[imax];
    i=0;
    while(i<N)
    {
        if(tempi[i]>tempomax)
        {
            tempomax=tempi[i];
            imax=i;
        }
        i=i+1;
    }
    cout<<"Il "<<imax+1<<"° atleta, di nome "<<nomi[imax]<<" proveniente da/dall' "<<nazioni[imax]<<" e che ha avuto un tempo di "<<tempi[imax]<<"s, ha perso la gara"<<endl;
    float somma, media, T;
    i=0;
    somma=0;
    while(i<N)
    {
        somma=somma+tempi[i];
        i=i+1;
    }
    media=somma/N;
    cout<<"La media dei tempi è "<<media<<endl;
    i=0;
    while(i<N)
    {
        if(tempi[i]<=media)
        {
            cout<<"Il "<<i+1<<"° atleta, che si chiama "<<nomi[i]<<", viene dall'/dalla "<<nazioni[i]<<" e il suo tempo è "<<tempi[i]<<"s, ha stabilito un tempo minore (o uguale) alla media"<<endl;
        }
        i=i+1;
    }
    cout<<"Dimmi un tempo"<<endl;
    cin>>T;
    i=0;
    while(i<N)
    {
        if(tempi[i]<=T)
        {
            cout<<"Il "<<i+1<<"° atleta, che si chiama "<<nomi[i]<<", viene dall'/dalla "<<nazioni[i]<<" e il suo tempo è "<<tempi[i]<<"s, ha stabilito un tempo minore (o uguale) al tempo "<<T<<"s";
        }
      i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
