using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args){
            class Funcionario
        {
            private string nome;
            private int matricula;
            public float salario;

            public Funcionario(string nome)
            {
                this.nome = nome;
            }

            public Funcionario()
            {
            }

            public Funcionario(string nome, int matricula, float salario)
            {
                this.nome = nome;
                this.matricula = matricula;
                this.salario = salario;
            }

            public string getNome()
            {
                return this.nome;
            }

            public void setNome(string nome)
            {
                this.nome = nome;
            }


            public int getMatricula()
            {
                return this.matricula;
            }

            public void setMatricula(int matricula)
            {
                this.matricula = matricula;
            }


            public float getSalario()
            {
                return this.salario;
            }

            public void setSalario(float salario)
            {
                this.salario = salario;
            }

            public void imprimir()
            {
                Console.WriteLine(this.nome + " " + this.matricula + " " + this.salario);
            }


        }


        class program
        {
            static void Main(string[] args)
            {

                fun[] garage = {
        new fun("Bruno", 11111, 2500.00)
        new Fun("Fernando", 22222, 5100.00)
                new Fun("Bruno", 33333, 9800.00)
        }
    

        foreach (Fun Funcionario in garage)
                {
                    Console.WriteLine(Funcionario.name);
                    Console.WriteLine(Funcionario.matricula);
                    Console.WriteLine(Funcionario.salario);
                }

                Console.ReadKey();
            }
        }
    }
    }
}
