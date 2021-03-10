package exercicios;

import java.util.Scanner;

//Elabore um algoritmo que leia dois números e faça uma das quatro
//operações. A operação (soma, subtração, multiplicação ou divisão) será
//escolhida pelo usuário.


public class exer_05 {
     public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Informe um numero =>");
        float num_01 = scan.nextFloat();
        
        System.out.println("Informe outro numero =>");
        float num_02 = scan.nextFloat();
        
        System.out.println("Informe uma operação para ser realizada:");
        System.out.println("1. Soma");
        System.out.println("2. Subtração");
        System.out.println("3. Multiplicação");
        System.out.println("4. divisão");
        System.out.println("Escolha uma opção =>");
        int operacao = scan.nextInt();
        
        float resultado;
        
        switch(operacao){
            case 1: resultado = num_01 + num_02; break;
            case 2: resultado = num_01 - num_02; break;
            case 3: resultado = num_01 * num_02; break;
            case 4: resultado = num_01 / num_02; break;
            default: resultado = 0;
        }
        
        System.out.println("O resultado é = "+resultado);
    }
}

