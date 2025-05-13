namespace std;

public class Pessoa : Usuario {
    // Atributos
    // nome
    // idade
    // public + tipo + nome
    public string Nome { get; set; }
    public int Idade { get; set; }

    //Metodos
    // Comer
    // Mostrar Dados
    // public + tipo do retorno + nome da função(parametros) {}
    public void Comer() {
        Console.WriteLine($"{Nome} está comendo nesse momento, aguarde um minuto.");
    }
    // override ToString()
    public void MostrarDados() {
        Console.WriteLine($"Nome: {Nome}, Idade: {Idade}, Email: {Email}");
    }

}