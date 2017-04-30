#include <stdio.h>
#include <stdlib.h>
#define FILAS 9
#define COLS 6
char *dia[]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
int **matriz_horario,***matriz_asignatura,i,j;
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
char **TallerSITEC[]={"SITEC","3",diaHercules,"Hercules"};
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


int funcion_rellena(int iniciaI, int iniciaJ, char *mellegodia, char *nombreasignatura, char *numeroHoras){

    while(iniciaI<=8){
        while(iniciaJ<=5){

            if ((iniciaJ==0) && (strcmp(mellegodia,"Lunes")==0) && (strcmp(matriz_horario[iniciaI][iniciaJ],"Vacio")==0) && (atoi(numeroHoras)>0)){
                matriz_horario[iniciaI][iniciaJ]=nombreasignatura;
                char buffer[20];

                matriz_asignatura[iniciaI][1]=itoa(atoi(numeroHoras)-1,buffer,10);
                printf("num este es%s\n",matriz_asignatura[iniciaI][1]);
                funcion_magica(iniciaI,iniciaJ+1);

                return;

            }
            else if (iniciaJ==1 && strcmp(mellegodia,"Martes")==0 && strcmp(matriz_horario[iniciaI][iniciaJ],"Vacio")==0  && (atoi(numeroHoras)>0)){
                matriz_horario[iniciaI][iniciaJ]=nombreasignatura;
                char buffer[20];

                matriz_asignatura[iniciaI][1]=itoa(atoi(numeroHoras)-1,buffer,10);
                funcion_magica(iniciaI,iniciaJ+1);
                return;
            }
            else if (iniciaJ==2 && strcmp(mellegodia,"Miercoles")==0 && strcmp(matriz_horario[iniciaI][iniciaJ],"Vacio")==0 && (atoi(numeroHoras)>0)){
                matriz_horario[iniciaI][iniciaJ]=nombreasignatura;
                char buffer[20];
                int variable=itoa(numeroHoras,buffer,10)-1;
                matriz_asignatura[iniciaI][1]=itoa(atoi(numeroHoras)-1,buffer,10);
                funcion_magica(iniciaI,iniciaJ+1);
                return;
            }
            else if (iniciaJ==3 && strcmp(mellegodia,"Jueves")==0 && strcmp(matriz_horario[iniciaI][iniciaJ],"Vacio")==0 && (atoi(numeroHoras)>0)){
                matriz_horario[iniciaI][iniciaJ]=nombreasignatura;
                char buffer[20];
                int variable=itoa(numeroHoras,buffer,10)-1;
                matriz_asignatura[iniciaI][1]=itoa(atoi(numeroHoras)-1,buffer,10);
                funcion_magica(iniciaI,iniciaJ+1);
                return;
            }
            else if (iniciaJ==4 && strcmp(mellegodia,"Viernes")==0 && strcmp(matriz_horario[iniciaI][iniciaJ],"Vacio")==0 && (atoi(numeroHoras)>0)){
                matriz_horario[iniciaI][iniciaJ]=nombreasignatura;
                char buffer[20];
                int variable=itoa(numeroHoras,buffer,10)-1;
                matriz_asignatura[iniciaI][1]=itoa(atoi(numeroHoras)-1,buffer,10);
                funcion_magica(iniciaI,iniciaJ+1);
                return;
            }
            else if (iniciaJ==5 && strcmp(mellegodia,"Sabado")==0 && strcmp(matriz_horario[iniciaI][iniciaJ],"Vacio")==0 && (atoi(numeroHoras)>0)){
                matriz_horario[iniciaI][iniciaJ]=nombreasignatura;
                char buffer[20];
                int variable=itoa(numeroHoras,buffer,10)-1;
                matriz_asignatura[iniciaI][1]=itoa(atoi(numeroHoras)-1,buffer,10);
                funcion_magica(iniciaI,iniciaJ+1);
                return;
            }
            else{
                funcion_magica(iniciaI,iniciaJ+1);
                return;
            }


        }




        funcion_magica(iniciaI+1,0);
        return;
    }

}

int funcion_magica(int iniciaI,int iniciaJ){
    int i,j,k;


    for(i=1;i<=15;i++){

        for(j=0;j<=2;j++){
            if (j==2){
                for (k=0;k<=2;k++){
                    printf("%d-%d\n",iniciaI,iniciaJ);
                    //printf("%d\n",i);
                    //printf("%s-%s\n",matriz_asignatura[i][j][k],matriz_asignatura[i][0]);
                    if (atoi(matriz_asignatura[i][1])!=0){
                        printf("este es%s\n",matriz_asignatura[i][0]);

                        funcion_rellena(iniciaI,iniciaJ,matriz_asignatura[i][j][k],matriz_asignatura[i][0],matriz_asignatura[i][1]);
                        return;
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

    funcion_magica(1,0);

    int tu,poto;
    for(tu=0;tu<=8;tu++){
        for(poto=0;poto<=5;poto++){
                printf("%s|",matriz_horario[tu][poto]);

        }
        printf("\n");
    }





    return 0;


}
