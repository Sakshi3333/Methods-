import java.util.Scanner;

public class program23
{
    
    public static void main(String arg[])
    {
        Scanner reader = new Scanner(System.in);

        System.out.print("Enter the number:");
        int num = reader.nextInt();

        if(num % 2 == 0)
            System.out.println(num + "is even");
        else
            System.out.println(num + "is odd");
    }
}