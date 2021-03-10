package exercicios;


//Elabore um algoritmo que imprima todos os números pares de 500 a
//250 e também a soma destes números

public class exer_10 {
     public static void main(String[] args) {
        
         float acumulador = 0;
         
         for (int i = 500; i >= 250; i--) {
            if((i % 2) == 0){
                System.out.println(""+i);
                acumulador += i;
            } 
         }
         
         System.out.println("Soma de todos os pares = "+acumulador);
                
    }
}

