/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace Atividade_2
{
class Program
{
static void Main(string[] args)
{
Cliente[] c1 = new Cliente[4];
c1[0] = new Cliente();
c1[1] = new Cliente();
c1[2] = new Cliente();
c1[3] = new Cliente();
c1[0].nome = "Rafael";
c1[0].matricula = 0000;
c1[0].salario = 7900;
c1[1].nome = "Diego";
c1[1].matricula = 0001;
c1[1].salario = 7800;
c1[2].nome = "Fabio";
c1[2].matricula = 0002;
c1[2].salario = 7700;
c1[3].nome = "Guigs";
c1[3].matricula = 0003;
c1[3].salario = 7600;
double media = c1[0].media(c1[1], c1[2], c1[3]);
if (c1[0].salario > media)
{
Console.WriteLine(c1[0].nome + " " + c1[0].matricula + " " +
c1[0].salario);
}
if (c1[1].salario > media)
{
Console.WriteLine(c1[1].nome + " " + c1[1].matricula + " " +
c1[1].salario);
}
if (c1[2].salario > media)
{
Console.WriteLine(c1[2].nome + " " + c1[2].matricula + " " +
c1[2].salario);
}
if (c1[3].salario > media)
{
Console.WriteLine(c1[3].nome + " " + c1[3].matricula + " " +
c1[3].salario);
}

Console.ReadKey();
}
}
class Cliente
{
public string nome { get; set; }
public int matricula { get; set; }
public double salario { get; set; }
public double media(Cliente c1, Cliente c2, Cliente c3)
{
return (this.salario + c1.salario + c2.salario + c3.salario) / 4;
}
}
}
}
