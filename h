using System;

public class Program
{
    public static void Main(string[] args)
    {
        int max = Math.Max(5, 10);
        Console.WriteLine("El mayor es: " + max);

        int min = Math.Min(5, 10);
        Console.WriteLine("El menor es: " + min);

        double sqrt = Math.Sqrt(64);
        Console.WriteLine("La raíz es: " + sqrt);

        double abs = Math.Abs(-4.7);
        Console.WriteLine("El valor absoluto es: " + abs);

        double round = Math.Round(-4.7);
        Console.WriteLine("El valor absoluto es: " + abs);
    }
}