package estacio.prova.av2.model;


/**
 *
 * @author Euclides Rodrigues Junior
 */
public class Variaveis_de_comunicacao {
    // nome do cliente, id da agencia, id da conta corrente, data do aniversário e saldo atualizado. 
    private String nome;
    private int id_agencia;
    private int id_conta;
    private int nasc;
    private double saldo_real;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getId_agencia() {
        return id_agencia;
    }

    public void setId_agencia(int id_agencia) {
        this.id_agencia = id_agencia;
    }

    public int getId_conta() {
        return id_conta;
    }

    public void setId_conta(int id_conta) {
        this.id_conta = id_conta;
    }

    public int getNasc() {
        return nasc;
    }

    public void setNasc(int nasc) {
        this.nasc = nasc;
    }

    public double getSaldo_real() {
        return saldo_real;
    }

    public void setSaldo_real(double saldo_real) {
        this.saldo_real = saldo_real;
    }

    public Variaveis_de_comunicacao(int id_agencia, int id_conta, int nasc, double saldo_real) {
        this.id_agencia = id_agencia;
        this.id_conta = id_conta;
        this.nasc = nasc;
        this.saldo_real = saldo_real;
    }

    public Variaveis_de_comunicacao() {
    }

}
