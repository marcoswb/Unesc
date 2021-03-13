package exercicios;

import java.util.Scanner;

//Faça um programa em Java que leia um inteiro e mostre a seguinte
//tabela de multiplicação


public class exer_11 {
     public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Informe um número inteiro =>");
        int num = scan.nextInt();
        
         for (int i = 1; i <= num; i++) {
             for (int j = 1; j <= i; j++) {
                 int numero = i * j;
                 System.out.print(numero+"     ");
             }
             
             System.out.println("\n");
         }
    }
}

