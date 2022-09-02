import java.util.Scanner;

public class Sumofdigits
{
    public static void main(String args[])
    {
        int number,digit,sum = 0;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number:");
        number = sc.nextInt0;

        while(number > 0)
        {
            digit = number % 10;

            sum = sum + digit ;

            number = number /10;
        }

        System.out.println("Sum of digits "+sum);
    }

}