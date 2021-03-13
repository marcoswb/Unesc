package exercicios;

//Elabore um algoritmo que imprima todos os números ímpares de 250 a
//500 e também a soma destes números.


public class exer_08 {
     public static void main(String[] args) {
        
         float acumulador = 0;
         
         for (int i = 250; i <= 500; i++) {
            if((i % 2) != 0){
                System.out.println(""+i);
                acumulador += i;
            } 
         }
         
         System.out.println("Soma de todos os impares = "+acumulador);
       
    }
}

