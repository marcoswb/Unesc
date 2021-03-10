package exercicios;

import java.util.Scanner;

//Elabore um algoritmo que entre com números enquanto forem positivos
//e imprimir quantos números positivos foram digitados.


public class exer_09 {
     public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        float num = 0;
        int contador = -1;
        
        do{
            System.out.println("Informe um número =>");
            num = scan.nextFloat();
            contador++;
        }while(num >= 0);
        
         System.out.println(contador+" números positivos foram digitados");
                
    }
}

