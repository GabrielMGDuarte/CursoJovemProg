namespace std;

public class Usuario {
    // Atributos
    // email
    // public + tipo + nome
    public string Email { get; set; }

    //Metodos
    // Acessar Login
    // public + tipo do retorno + nome da função(parametros) {}
    public void Login() {
        Console.WriteLine($"{Email} está entrando no sistema.");
    }
}