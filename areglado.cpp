#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *hilo(void *valor){
	char *texto =(char *) valor;
	struct timespec tiempo ={1,0};
	while(1){
		printf("%s \n",texto);
        pthread_delay_np(&tiempo);//un bucle repetitivo
	}
}
,,,67
int main(void){
pthread_t hola1;
pthread_t hola2;

pthread_create(&hola1, NULL , &hilo , (void *) "Proceso 1");
pthread_create(&hola2, NULL , &hilo , (void *) "Proceso 2");
pthread_join(hola1, NULL);
pthread_join(hola2, NULL);
printf ("Fin\n");
}
