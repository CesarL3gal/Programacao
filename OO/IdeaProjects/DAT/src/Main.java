import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("Correcao.dat");
            writer.write("0.703064767123154\t0.2499\t0.0085928083821211\t0.00318268752552267\n");
            writer.write("1.01302726042851\t0.3479\t0.00665368795230786\t0.00246384092317454\n");
            writer.write("1.31220267127722\t0.4459\t0.00665237447990763\t0.00248969989251934\n");
            writer.write("1.91874351464692\t0.6419\t0.0097179674611643\t0.00358094845423721\n");
            writer.write("2.54235521414173\t0.8379\t0.0185394311742875\t0.00654076584377161\n");
            writer.close();
            System.out.println("Arquivo .dat criado com sucesso!");
        } catch (IOException e) {
            System.out.println("Erro ao escrever no arquivo: " + e.getMessage());
        }
    }
}