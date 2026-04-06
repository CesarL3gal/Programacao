import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
    Teste Cesar = new Teste();
    Cesar.setNome("Cesar Augustus");
    Cesar.setIdade(1000);
    Cesar.setTelefone("123456789");
        Cesar.imprimiDados();
        scan.close();
    }
}