
#include <windows.h>
#include <iostream>
#include <conio.h>


using namespace std;

char tecla;
int x1=5,y1=5;



void PCursor(int x, int y){
    HANDLE control;
    control = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD cordenada;
    cordenada.X = x;
    cordenada.Y = y;
    SetConsoleCursorPosition(control,cordenada);
}

void limites(){

    for(int i=2; i< 78; i++){
        PCursor(i,3);
        cout<< (char)205;
        PCursor(i,23);
        cout<< (char)205;
    }

    for(int i=4; i< 23; i++){
        PCursor(2,i);
        cout<< (char)186;
        PCursor(77,i);
        cout<< (char)186;
    }
    PCursor(2,3);
    cout<< (char)201;
    PCursor(2,23);
    cout<< (char)200;
    PCursor(77,3);
    cout<< (char)187;
    PCursor(77,23);
    cout<< (char)188;


}



int main()
{
    //limites();

    while(tecla != 'z'){
            system("cls");
            PCursor(x1,y1);
            cout << "*";
            tecla=getch();
            switch(tecla){
                case 'i':
                    if(y1!= 2){
                        y1--;
                    }
                    break;
                case 'k':
                    if(y1!= 23){
                        y1++;
                    }
                    break;
                case 'j':
                    if(x1!= 2){
                        x1--;
                    }
                    break;
                case 'l':
                    if(x1!=77)
                    {
                        x1++;
                    }
                    break;
            }
    }

    system("pause>info"); //rediccionar la salida a un arch de text
    return 0;
}
