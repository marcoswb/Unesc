package exercicios;

import java.util.Scanner;

//Escreva um programa que lê Strings do teclado até que sejam lidas
//duas Strings iguais em sequência, uma imediatamente após a outra.
//Quando isto ocorre, o programa imprime o número de Strings lidas, o
//tamanho da maior String lida, e a concatenação de todas as Strings lidas
//exceto a última. Lembre-se que o operador '==' não compara o conteúdo
//das Strings.

public class exer_12 {
     public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String palavra, palavra_aux = "", concatenacao = "";
        int contador = 0;
        int tamanho_string = 0;
        boolean duplicada = false;
        
        do{
            System.out.println("Informe uma  string =>");
            palavra = scan.next();
            contador++;
            
            if(palavra.length() > tamanho_string){
                tamanho_string = palavra.length();
            }
            
            if(palavra.equalsIgnoreCase(palavra_aux)){
                duplicada = true;
            
            } else {
                
                concatenacao += palavra;
            }
            
            palavra_aux = palavra;
            
            
        }while(duplicada != true);
        
         System.out.println("Número de Strings lidas = "+contador);
         System.out.println("Tamanho da maior String = "+tamanho_string);
         System.out.println("Concatenação de todas Strings = "+concatenacao);
         System.out.println("==============================================");
         System.out.println("O operador == não funciona com Strings pois Strings são consideradas objetos em Java,");
         System.out.println("não são um tipo primitivo de dados, assim precisamos utilizar um método específico para isso,");
         System.out.println("que no caso é o método '.equals' ou '.equalsIgnoreCase'");
                
    }
}

