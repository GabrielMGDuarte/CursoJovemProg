namespace std;

public class Program {

    public static void Main () {
        Pessoa[] pessoas = new Pessoa[100];
        int op, qtdePessoas = 0;
        Console.WriteLine("Bem-vindo ao programa:");
        do {
            Console.WriteLine("Digite a opção desejada:");
            Console.WriteLine("1 - Adicionar");
            Console.WriteLine("2 - Listar");
            Console.WriteLine("3 - Alterar");
            Console.WriteLine("4 - Deletar");
            Console.WriteLine("5 - Sair");
            op = Convert.ToInt32(Console.ReadLine());

            switch (op){
                case 1 : {
                    //adicionar uma pessoa dentro do array
                    Pessoa pessoa = new Pessoa();
                    Console.WriteLine("Digite o nome da pessoa: ");
                    pessoa.Nome = Console.ReadLine() ?? "";
                    Console.WriteLine("Digite a idade da pessoa: ");
                    pessoa.Idade = Convert.ToInt32(Console.ReadLine() ?? "");
                    Console.WriteLine("Digite o email da pessoa ");
                    pessoa.Email = Console.ReadLine() ?? "";

                    // pedir os atributos da pessoa
                    pessoas[qtdePessoas] = pessoa;
                    qtdePessoas++;
                    Console.WriteLine("Cadastrado com sucesso");
                    break;
                }
                case 2 : {
                    Console.WriteLine("----- Listando as pessoas -----");
                    for (int i = 0; i < pessoas.Length; i++) {
                        if(pessoas[i] != null){ // faz mostrar somente o que não esta null no array
                            Console.Write(i); // mostra a posição do index
                            pessoas[i].MostrarDados();
                        }
                    }
                    Console.WriteLine("--------------------------------");
                    break;
                }
                case 3 : {
                    Console.WriteLine("Informe o index da pessoa para alterar: ");
                    int idAlterar = Convert.ToInt32(Console.ReadLine());
                    if(pessoas[idAlterar] != null){
                        Console.WriteLine("Digite o nome da pessoa: ");
                        pessoas[idAlterar].Nome = Console.ReadLine() ?? "";
                        Console.WriteLine("Digite a idade da pessoa: ");
                        pessoas[idAlterar].Idade = Convert.ToInt32(Console.ReadLine() ?? "");
                        Console.WriteLine("Digite o email da pessoa ");
                        pessoas[idAlterar].Email = Console.ReadLine() ?? "";
                        Console.WriteLine("Alterado com sucesso");
                    }else Console.WriteLine("Não podemos alterar um cadastro inexistente.");
                    break;
                }
                case 4 : {
                    // saber qual a posição
                    Console.WriteLine("Informe o index da pessoa para deletar: ");
                    int idDeletar = Convert.ToInt32(Console.ReadLine());
                    pessoas[idDeletar] = null;
                    Console.WriteLine("Deletado com sucesso");
                    break;
                }
                case 5 : {
                    Console.WriteLine("Saindo do programa.");
                    break;
                }
                default : {
                    break;
                }
            }

            // Console.WriteLine("Teste");
            // Pessoa teste = new Pessoa(); // instanciando; variavel teste se torna uma "Pessoa"
            // teste.Email = "testando@email.com";
            // teste.Nome = "Gabriel";
            // teste.Idade = 28;
            // teste.MostrarDados();
        } while (op != 5);
    }
}