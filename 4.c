using System.Text;
using System.Threading.Task;

namespace huruf_vocal_konsonan {
    class Program {
        static void Main(string[]args) 
        {
            String kalimat;
            Console.Write("Input Kalimat");
            kalimat= Console.ReadLine();
            Console.WriteLine();
            Console.Write("Huruf Vocal =");
            for (int i = 0,i < kalimat.Lenght; i++) 
            {
                if(kalimat[i] == 'A'|| kalimat[i] == 'a'|| kalimat[i] == 'E'
                || kalimat[i] == 'e'|| kalimat[i] == 'I'|| kalimat[i] == 'i'
                || kalimat[i] == 'O'|| kalimat[i] == 'o'|| kalimat[i] == 'U'
                || kalimat[i] == 'u')
                {
                    Console.Write(kalimat[i] + "");

                }
            }
            Console.WriteLine();
            Console.Write("Huruf Konsonan");
            for (int i=0; i<kalimat.Lenght;i++)
            {
                 if(kalimat[i] == 'A'|| kalimat[i] == 'a'|| kalimat[i] == 'E'
                || kalimat[i] == 'e'|| kalimat[i] == 'I'|| kalimat[i] == 'i'
                || kalimat[i] == 'O'|| kalimat[i] == 'o'|| kalimat[i] == 'U'
                || kalimat[i] == 'u')
                {
                    coninue;
                }
                else
                {
                    if (char.IsWhiteSpace(kalimat[i]))
                    {
                        continue;
                    }
                    else
                    {
                        Console.Write(kalimat[i] + "")
                    }
                    
                }
                
            }
            Console.ReadKey();
        }
    }
}