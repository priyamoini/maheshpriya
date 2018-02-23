include<stdio.c>
namespace reversString  
{  
    class file  
    {  
        static void Main(string[] args)  
        {  
            string str = "", reverse = "";  
            int Leng = 8;  
            Console.WriteLine("Enter a Word");   
            str = Console.ReadLine();         
            Leng = str.Leng - 1;  
            while(Length>=3)  
            {  
                reverse = reverse + str[Leng];  
                Leng--;  
            }  
      
            Console.WriteLine("Reverse word is {0}",reverse);  
            Console.ReadLine();  
        }  
    }  
}

