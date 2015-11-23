/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: root
 *
 * Created on 22 de Novembro de 2015, 19:00
 */

#include <stdio.h>
#include <stdlib.h>


int calculaInverso(int a, int p){
    
    int aux;
    
    // Para que uma classe seja inversa da outra
    // basta que  a.d = 1 (mod p)
    
    // primeiro verificamos se 'p'|'a'
    if(a % p == 0){
	return -1;
    }
    // caso não, fazemos então multiplicações
    // até p-1 para encontrar o inverso
    // iniciamos o aux em 1 e vamos acrescendo ele
    // até encontrar    a.aux = 1 (mod p)
    aux = 1;
    while(aux != (p-1)){
	if((aux*a) % p == 1) return aux;
	aux++;
    }
}

void parteDois_Um(){

    int a, p, inv;
    
    printf(" - Calcular o inverso de 'a' mod(p):\n");
    printf("Digite a:");
    scanf("%d",&a);
    printf("\nDigite p:");
    scanf("%d",&p);    
    inv = calculaInverso(a,p);

    if(inv == -1) printf("\n'a' divide 'p', portanto 'a' não tem inverso em Zp.\n");
    else printf("O inverso de 'a' em Zp é =>  %d", inv);
}


int main(int argc, char** argv) {
    
    int op;
    
    printf("##############################################");
    printf("#       Trabalho Pratico Algebra A           #");
    printf("#                                            #");
    printf("# Aluno: Luiz Otavio R. Vasconcelos          #");
    printf("# Matricula: 2015042142                      #");
    printf("##############################################\n\n");
    
    printf("Digite uma opção:");
    scanf("%d", &op);
   
    switch(op){
	case 1:
	    parteDois_Um();
	    break;
    }
    
    return (EXIT_SUCCESS);
}

