#include <iostream>
using namespace std;

int selecciondepersonaje (){
string picachu="Picachu";
int picachuataque=4;
int picachuvida=35;

string dash="Dash";
int dashataque=3;
int dashvida=48;

string bull="Bull";
int bullataque=5;
int bullvida=24;

string pepegrillo="Pepegrillo";
int pepegrilloataque=8;
int pepegrillovida=16;

cout<<"Elegir Personaje"<<endl<<endl;
cout<<"1 para elegir Picachu"<<endl<<"Stats "<<picachuataque<<"  "<< picachuvida<<endl<<endl;
cout<<"2 para elegir Dash"<< endl<<"Stats "<<dashataque<<"   "<< dashvida<<endl<<endl;
cout<<"3 para elegir Bull"<<endl<<"Stats "<<bullataque<<"  "<< bullvida<<endl<<endl;
cout<<"4 para elegir Pepegrillo OP"<<endl<<"Stats "<<pepegrilloataque<<"  "<< pepegrillovida<<endl<<endl;

 int opcion;
 cin>>opcion;
 return opcion;
}

void transformaciondepersonaje (string &jugador,int &ataque,int &vida, int &opcion){
    string picachu="Picachu";
    int picachuataque=4;
    int picachuvida=35;

    string dash="Dash";
    int dashataque=3;
    int dashvida=48;

    string bull="Bull";
    int bullataque=5;
    int bullvida=24;

    string pepegrillo="Pepegrillo";
    int pepegrilloataque=8;
    int pepegrillovida=16;

    if (opcion==1){
        jugador=picachu;
        ataque=picachuataque;
        vida=picachuvida;
    }
    else if (opcion==2){
        jugador=dash;
        ataque=dashataque;
        vida=dashvida;
    }
    else if (opcion==3){
        jugador=bull;
        ataque=bullataque;
        vida=bullvida;
    }
    else if (opcion==4){
        jugador=pepegrillo;
        ataque=pepegrilloataque;
        vida=pepegrillovida;
    }



}


int main()
{
    string jugador1, jugador2;
    int jugador1ataque, jugador1vida, jugador2ataque, jugador2vida;

    cout<<"Jugador 1"<<endl;
    int opcion=selecciondepersonaje ();
    transformaciondepersonaje (jugador1, jugador1ataque,jugador1vida,opcion);

    cout<<"Jugador 2"<<endl;
    opcion=selecciondepersonaje ();
    transformaciondepersonaje (jugador2, jugador2ataque, jugador2vida, opcion);

    int turno=1;
    bool seguirjugando=true;

    while (seguirjugando==true){
        cout<<"Ronda Nº "<<turno<<endl;
        jugador1vida=jugador1vida-jugador2ataque;
        jugador2vida=jugador2vida-jugador1ataque;
        cout<<jugador1<<jugador1vida<<" HP "<<endl<<jugador2<<jugador2vida<<" HP "<<endl;
        if (jugador1vida<1 || jugador2vida<1) {
            seguirjugando=false;}

        turno++;
        system("pause");
    }

    if (jugador1vida<1 && jugador2vida<1) {cout<<"Empate";}
    else if (jugador1vida<1) {cout<<jugador2<<" es el ganador"<<endl;}
    else if (jugador2vida<1) {cout<<jugador1<<"es el ganador"<<endl;}

    return 0;
}
