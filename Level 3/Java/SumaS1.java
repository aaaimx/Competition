package sumatoriaS1;
import java.util.*;
public class SumaS1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner input = new Scanner(System.in);
		
		double n,facto=1,i,j=1,a;
		double s1=1;
		System.out.println("introduce el valor de n para calcular la siguiente sumatoria");
		System.out.println("s1= 1+(1/2!)+(1/3!)+...+(1/n!)");
		n=input.nextDouble();
		do
		{
			 if(j==1){
			        s1=s1;
			        System.out.println("s1="+s1);
			        ++j;
			    }else{
				    for(i=1;i<=j;++i){ //loop que calcula el factorial necesario para la serie
					facto=facto*i;
					System.out.println(+i+"! ="+facto);
				    }
				    s1=s1+(1/facto);
				    facto=1;
				    System.out.println("valor de j = "+j+" y s1 = "+s1);
				    ++j;
			    }
		}while(j<=n);
	}
}


