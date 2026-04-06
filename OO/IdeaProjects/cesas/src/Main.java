import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("dadosexp3.dat");
            writer.write("0.2755\t1.48053262457276\t0.0002\t0.0182248166510785\n");
            writer.write("0.2955\t1.39340959990473\t0.0002\t0.00920485570656668\n");
            writer.write("0.3155\t1.30833015554476\t0.0002\t0.00784365142331277\n");
            writer.write("0.3355\t1.22169575279915\t0.0002\t0.0171788525331299\n");
            writer.write("0.3555\t1.15228047059749\t0.0002\t0.00802940725321936\n");
            writer.close();
            System.out.println("Arquivo .dat criado com sucesso!");
        } catch (IOException e) {
            System.out.println("Erro ao escrever no arquivo: " + e.getMessage());
        }
    }
}