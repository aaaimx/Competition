package sumatoriaS3;
import java.util.*;
public class sumaS3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       Scanner input = new Scanner(System.in);
       double n,facto=1,s3=0;
       System.out.println("calcular la siguiente serie");
       System.out.println("s3 = [2(1!-(1^2))/(1+1)^1-2]+[2(2!-(2^2))/(1+2)^2-2]+..+[2(n!-(n^2))/(1+n)^n-2]");
       System.out.println("introduce un valor para n");
       n=input.nextDouble();
       
       if(n<0){
    	   System.out.println("¡System error!");
    	   System.err.println("error no se puede calcular factoriales de numeros negativos");
    	   System.out.println("y por lo tanto no se pude continuar con el calculo");
       }else{
    	   if(n==0){
    		   s3=(2*(1))/Math.pow(1, -2);
    		   System.out.println("n="+n+" y s3 ="+s3);
    	   }else{
    		   for(double i = 1;i <= n; ++i){
    			   
    			   for(double j = 1;j <= i; ++j){
    				   facto=facto*j;
    				   System.out.println(+j+"! = "+facto);
    			   }
    			   s3=s3+(2*(facto-Math.pow(i, 2)))/Math.pow((1+i), (i-2));
    			   facto=1;
    			   System.out.println("s3 = "+s3);
    		   }
    	   }
       }
	}

}
 