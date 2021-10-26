/*
 *Autor		:Suseth Abigail Sandoval Damian
 *Date		:20211019
 * */

/*Description:	Realizar un código que determine si el usuario es mayor de edad de acuerdo a el añ de nacimiento*/

#include<stdio.h>
int main(){ //Inicio de metodo principal
	//Declaración de variables
	int f_nac;
	int f_actual = 2021;
	int dif = 0;

	printf("Ingresa tu anio de nacimiento ");
	scanf("%d",&f_nac);

	dif = (f_actual - f_nac);

	if(dif >= 18){
		printf("%s %d %s", "El usuario tiene", dif," años, asi que es mayor de edad");
	}
	else{
		printf("%s %d %s", "El usuario tiene",dif, " años, asi que es menor de edad");
	}

}//Fin metodo principal
