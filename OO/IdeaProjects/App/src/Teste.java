public class Teste {
    private String nome;
    private String telefone;
    private int idade;

    public Teste(){
        nome="";
        idade=0;
        telefone="";
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public String getNome(){
        return nome;
    }

    public void setTelefone(String telefone){
        this.telefone=telefone;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public int getIdade(){
        return idade;
    }

    public void imprimiDados(){
        System.out.println("---------------");
        System.out.println("Nome : " + nome);
        System.out.println("Idade : " + idade);
        System.out.println("Telefone : " + telefone);
        System.out.println("---------------");
    }
    
}
