import java.util.*;
class calc{
public static void main(String []args)  {
	System.out.println("Enter two No's.");
	Scanner sc= new Scanner(System.in);
	int a= sc.nextInt();
	int b= sc.nextInt();

	char validate_s = (char) 48;
	char validate_e = (char) 57;

	char validate_a = (char) a;
	char validate_b = (char) b;

	System.out.println(validate_s);
	System.out.println(validate_e);

	if(( validate_a >= validate_s && validate_a <= validate_e ) && ( validate_b >= validate_s && validate_b <= validate_e ))
		{
	 	System.out.println("Addition of two no.="+(a+b));
	 	System.out.println("Subtraction of two no.="+(a-b));
	 	System.out.println("Multiplication of two no.="+(a*b));
	 	System.out.println("Division of two no.="+(a/b));
	
		}
	else
		{
		System.out.println("Output not possible");
		}
	}
}
