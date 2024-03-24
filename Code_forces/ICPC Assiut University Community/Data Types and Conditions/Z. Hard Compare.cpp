import  java.awt.*;
import java.util.Scanner;
 
public class Main
{
    public static void main(String[] args) {
Scanner in =new Scanner(System.in);
        long a1,b1,a2,b2;
        a1=in.nextLong();
        b1=in.nextLong();
        a2=in.nextLong();
        b2=in.nextLong();
        double result1= b1*Math.log(a1);
        double result2= b2*Math.log(a2);
        if(result1>result2)
            System.out.println("YES");
        else
            System.out.println("NO");
 
        }}
