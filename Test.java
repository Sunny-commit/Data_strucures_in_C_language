import java.util.Scanner;
import java.util.Random;
class Test{
	void details(){
		String a;
		Scanner sc=new Scanner(System.in);
		System.out.println("the details of the user are:");
		System.out.println("enter the phone number to send otp to your phone:");
		a=sc.next();
	}
/*	
	public static void main(String args[])
	{
		int i;
	Test obj1=new Test();
	Random rand=new Random();
	obj1.details();
	System.out.println("your otp is :");
	int n=rand.nextInt(10000)+1;
	System.out.println(n);
	int b;
	Scanner sc=new Scanner(System.in);
	b=sc.nextInt();
	if(b==n){
		System.out.println("your otp is valid");
	}
	else{
		System.out.println("your otp is invalid");
	}
	for(i=0;i<n;i++){
	}
	}*/
	public static void main(String args[]){
		Test obj1=new Test();
		String alpha="abcdefghijklmnopqrstuvwxyz";
		String number="0123456789";
		String otp=alpha+number;
		
		StringBuilder sb= new StringBuilder();
		Random random=new Random();
		int length=4;
		for(int i=0;i<length;i++){
			int index=random.nextInt(otp.length());
			char rchar=otp.charAt(index);
			sb.append(rchar);
		}
		
		String z=sb.toString();
		System.out.println("random string is:"+z);
		String b;
	Scanner sc=new Scanner(System.in);
	b=sc.next();
	if(b==z){
		System.out.println("your otp is valid");
	}
	else{
		System.out.println("your otp is invalid");
	}
	}
	
	}
	
	