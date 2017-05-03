#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILAS 9
#define COLS 6





char *dia[]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
int **matriz_horario,***matriz_asignatura,i,j,valorEntero;
// Creacion matriz_asig.
char *cabecera[]={"Asignatura","Horas","Dias Disponibles","Nombre profe"};
//------------------------------------------------------------
char **algorityprogra[]={"Algoritmos y Programacion","3",dia,"Sherlok"};
char **EstructDeDato[]={"EST DATOS","3",dia,"Sherlok"};
char **LengProgra[]={"LengPRogra","3",dia,"Sherlok"};
char **Analisis[]={"Analisis","3",dia,"Sherlok"};
//------------------------------------------------------------
char **SistInfo[]={"Sist Info","3",dia,"Pepe"};
char **IngSoft[]={"IngSoft","3",dia,"Pepe"};
char **SO[]={"SO","3",dia,"Pepe"};
//------------------------------------------------------------
char *diaHercules[]={"Lunes","Miercoles","Viernes"};
char **TallerSITEC[]={"SITEC","3ti",diaHercules,"Hercules"};
char **TecCom[]={"Tec Com","3",diaHercules,"Hercules"};
char **TeleCom[]={"Tele comu","3",diaHercules,"Hercules"};
//-------------------------------------------------------------
char *diaCharles[]={"Lunes","Martes","Miercoles"};
char **Intro[]={"Intro","3",diaCharles,"Charles"};
char **BD[]={"BD","3",diaCharles,"Charles"};
char **Teosis[]={"TEOSIS","3",diaCharles,"Charles"};
//--------------------------------------------------------------
char *diaJanes[]={"Martes","Jueves","Sabado"};
char **Grafo[]={"Grafo","3",diaJanes,"Janes"};
char **Arqui[]={"Arqui","3",diaJanes,"Janes"};
//---------------------------------------------------------------


int funcion_rellena(char *DiasDisponibles[30], char *NombreAsignatura, char *HorasDisponibles, int posicionAsignatura){
    int j=1,i=0,k=0;
    char buffer[20];
    int instante=atoi(HorasDisponibles);
    //printf("%s",DiasDisponibles[2]);
    //printf("%s\n",itoa((atoi(HorasDisponibles)),buffer,10));

    while (k<=5){


        while(i<=5){
            while(j<=8){

                if ((i==0) && (strcmp(DiasDisponibles[k],"Lunes")==0) && (strcmp(matriz_horario[j][i],"Vacio")==0) && (instante>0)){
                    instante--;
                    //printf("\n%d\n",posicionAsignatura);
                    matriz_horario[j][i]=NombreAsignatura;
                    //printf("%s-%d\n",itoa(instante,buffer,10),instante);
                    matriz_asignatura[posicionAsignatura][1]= itoa(instante,buffer,10);



                }

                else if (i==1 && strcmp(DiasDisponibles[k],"Martes")==0 && strcmp(matriz_horario[j][i],"Vacio")==0  && (instante>0)){
                    instante--;
                    matriz_horario[j][i]=NombreAsignatura;
                    matriz_asignatura[posicionAsignatura][1]= itoa(instante,buffer,10);

                }
                else if (i==2 && strcmp(DiasDisponibles[k],"Miercoles")==0 && strcmp(matriz_horario[j][i],"Vacio")==0 && (instante>0)){
                    instante--;
                    matriz_horario[j][i]=NombreAsignatura;
                    matriz_asignatura[posicionAsignatura][1]= itoa(instante,buffer,10);

                }
                else if (i==3 && strcmp(DiasDisponibles[k],"Jueves")==0 && strcmp(matriz_horario[j][i],"Vacio")==0 && (instante>0)){
                    instante--;
                    matriz_horario[j][i]=NombreAsignatura;
                    matriz_asignatura[posicionAsignatura][1]= itoa(instante,buffer,10);

                }
                else if (i==4 && strcmp(DiasDisponibles[k],"Viernes")==0 && strcmp(matriz_horario[j][i],"Vacio")==0 && (instante>0)){
                    instante--;
                    matriz_horario[j][i]=NombreAsignatura;
                    matriz_asignatura[posicionAsignatura][1]= itoa(instante,buffer,10);

                }
                else if (i==5 && strcmp(DiasDisponibles[k],"Sabado")==0 && strcmp(matriz_horario[j][i],"Vacio")==0 && (instante>0)){
                    instante--;
                    matriz_horario[j][i]=NombreAsignatura;
                    matriz_asignatura[posicionAsignatura][1]= itoa(instante,buffer,10);

                }
                else if (instante==0){
                        //printf("HOLA");
                        return;

                }

            j++;
            }
        i++;
        j=0;
        }
    k++;
    j=0;
    i=1;
    }
    printf("\n--------------------------------------------------------\n");

}

int funcion_magica(){
    int i1,j1,k1;
    int instante=atoi(matriz_asignatura[i1][1]);

    for(i1=1;i1<=15;i1++){

        for(j1=0;j1<=2;j1++){
            if (j1==2){
                for (k1=0;k1<=strlen(*matriz_asignatura[i1][j1]);k1++){
                    if (instante!=0){
                        break;
                    }
                    else{
                        funcion_rellena(*&matriz_asignatura[i1][j1], matriz_asignatura[i1][0], matriz_asignatura[i1][1], i1);
                    //return;
                    }



                }

            }



        }

    }


}



int main()
{

    // Creacion matriz_horario
    matriz_horario = (int **)malloc (FILAS*sizeof(int *));
    for (i=0;i<FILAS;i++){
        matriz_horario[i] = (int *) malloc (COLS*sizeof(int));
        if (i==0){
            matriz_horario[i]=dia;
        }
        else{
            for (j=0;j<COLS;j++){
                matriz_horario[i][j]="Vacio";
            }

        }

    }





    //Creacion matriz asignatura
    matriz_asignatura = (int **)malloc (FILAS*sizeof(int *));
    for (i=0;i<=15;i++){
        matriz_asignatura[i] = (int *) malloc (COLS*sizeof(int));
        if (i==0){
            matriz_asignatura[i]=cabecera;
        }
        else if(i==15){
            matriz_asignatura[i]=algorityprogra;
        }
        else if(i==14){
            matriz_asignatura[i]=EstructDeDato;
        }
        else if(i==13){
            matriz_asignatura[i]=LengProgra;
        }
        else if(i==12){
            matriz_asignatura[i]=Analisis;
        }
        else if(i==11){
            matriz_asignatura[i]=SistInfo;
        }
        else if(i==10){
            matriz_asignatura[i]=IngSoft;
        }
        else if(i==9){
            matriz_asignatura[i]=SO;
        }
        else if(i==8){
            matriz_asignatura[i]=TallerSITEC;
        }
        else if(i==7){
            matriz_asignatura[i]=BD;
        }
        else if(i==6){
            matriz_asignatura[i]=Teosis;
        }
        else if(i==5){
            matriz_asignatura[i]=Intro;
        }
        else if(i==4){
            matriz_asignatura[i]=Grafo;
        }
        else if(i==3){
            matriz_asignatura[i]=Arqui;
        }
        else if(i==2){
            matriz_asignatura[i]=TeleCom;
        }
        else if(i==1){
            matriz_asignatura[i]=TecCom;
        }


    }

    funcion_magica();

    int var1,var2;
    for(var1=0;var1<=8;var1++){
        for(var2=0;var2<=5;var2++){
                printf("|  %s   |  ",matriz_horario[var1][var2]);

        }
        printf("\n");
    }







    return 0;


}
