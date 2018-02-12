#include<stdio.c>
namespace reverseString  
{  
    class file  
    {  
        static void Main(string[] args)  
        {  
            string str = "", reverse = "";  
            int Leng = 0;  
            Console.WriteLine("Enter a Word");   
            str = Console.ReadLine();         
            Leng = str.Leng - 1;  
            while(Length>=0)  
            {  
                reverse = reverse + str[Leng];  
                Leng--;  
            }  
      
            Console.WriteLine("Reverse word is {0}",reverse);  
            Console.ReadLine();  
        }  
    }  
}
