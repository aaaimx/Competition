package decimal;

import java.util.Scanner;

public class Decimal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        int num,i=0,numcop;
        int arreglo[]= new int[100];
        Scanner input = new Scanner(System.in);
        System.out.println("introduce un numero decimal para comvertirlo a binario");
        num=input.nextInt();
        numcop=num;
        if(num==0){
        	System.out.println("el numero decimal "+num+" en binario es "+num);
        }else{
        	while(num>0){
        		arreglo[i]=num%2;
        		num/=2;
        		++i;
        	}
        	System.out.print(" el numero decimal "+numcop+" en binario es ");
        	for(int j=i-1;j>=0;--j){
        		System.out.print(arreglo[j]);
        	}
        }
        
	}

}
