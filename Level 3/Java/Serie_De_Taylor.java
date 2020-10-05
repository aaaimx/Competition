import java.util.*;
public class Serie_De_Taylor {
       public static void main(String [] args){
    	   Scanner input = new Scanner(System.in);
    	   double ex=1,n,x,facto=1;
    	   System.out.println("introduce el valor de n para");
    	   System.out.println("calcular la serie de taylor");
    	   System.out.println("ex=1+x+(x^2/2!)+(x^3/3!)+...+(x^n/n!)");
    	   n=input.nextDouble();
    	   System.out.println("ahora introduce un valor para la variable x");
    	   x=input.nextDouble();
    	   if((x==0)&&(n==0))
    	   {
    		   ex=ex+1;
    		   System.out.println("ex = "+ex);
    	   }
    	   else
    	   {
    		   for(double i = 1; i <= n ; ++i){
    			   
    			   for(double j = 1; j <= i; ++j ){
    				   facto=facto*j;
    				   System.out.println(+j+"! = "+facto);
    			   }
    			   ex=ex+(Math.pow(x, i)/facto);
    			   facto=1;
    			   System.out.println("ex = "+ex);
    		   }
    	   }
       }
}
