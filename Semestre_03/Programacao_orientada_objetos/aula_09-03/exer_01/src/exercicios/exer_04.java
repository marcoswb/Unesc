package exercicios;

import java.util.Scanner;

//Elabore um algoritmo que leia um número inteiro entre 1 e 12 e imprima
//o mês correspondente. Caso seja digitado um valor fora desse intervalo,
//deverá ser exibida uma mensagem informando que não existe mês com
//esse número.


public class exer_04 {
     public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Informe um número entre 1 e 12 =>");
        int mes = scan.nextInt();
        
        switch(mes){
            case 1: System.out.println("Janeiro"); break;
            case 2: System.out.println("Fevereiro"); break;
            case 3: System.out.println("Março"); break;
            case 4: System.out.println("Abril"); break;
            case 5: System.out.println("Maio"); break;
            case 6: System.out.println("Junho"); break;
            case 7: System.out.println("Julho"); break;
            case 8: System.out.println("Agosto"); break;
            case 9: System.out.println("Setembro"); break;
            case 10: System.out.println("Outubro"); break;
            case 11: System.out.println("Novembro"); break;
            case 12: System.out.println("Dezembro"); break;
        }
                
    }
}

