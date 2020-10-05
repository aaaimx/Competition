import java.util.*;
public class SumaS2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Scanner input = new Scanner(System.in);
        double i,s2=0;
        System.out.println("introduce un numero para calcular la siguiente serie");
        System.out.println("s2=3(a1)/5^(2(a1))+..+3(an)/5^(2(an))");
        i=input.nextDouble();
        if(i==0){
        	s2=0;
        	System.out.println("s"+i+" = "+s2);
        }else{
        	for(double j=1;j<=i;++j){
        		s2=s2+(3*j)/Math.pow(5, 2*j);
        		System.out.println("s"+j+" = "+s2);
        	}
        }
	}

}
