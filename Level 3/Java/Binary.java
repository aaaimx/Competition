package Application;

import java.util.Scanner;

public class Binary {
     public static void main(String args[]){
    	 
    	 Scanner input = new Scanner(System.in);
    	 
    	 int num,aux,numcop=0,num2,sb=0;
    	 System.out.println("introduce un numero binario para comvertirlo en decimal");
    	 num=input.nextInt();
    	 num2=num;
    	 
    	 for(int i = 0; num > 0 ; ++i){
    		 aux=num%10;
    		 sb=sb+aux*(int)Math.pow(2, i);
    		 num /= 10;
    		 numcop=numcop*10+aux;
    		 
    	 }
    	 
    	 System.out.println("el numero binario "+num2+" en decimal es "+sb);
     }
}
