package com.example.av1progdmoveis.models;

public class Veiculo {

    private int id;
    private String placa;
    private String ano;
    private String idade;
    private String valorBase;

    public String getPlaca() {
        return placa;
    }
    public int getId() {
        return id;
    }

    @Override
    public String toString() {
        return "Veiculo{" +
                "id=" + id +
                ", placa='" + placa + '\'' +
                ", ano='" + ano + '\'' +
                ", idade='" + idade + '\'' +
                ", valorBase='" + valorBase + '\'' +
                '}';
    }

    public Veiculo setId(int id) {
        this.id = id;
        return this;
    }

    public Veiculo setPlaca(String placa) {
        this.placa = placa;
        return this;
    }

    public String getAno() {
        return ano;
    }

    public Veiculo setAno(String ano) {
        this.ano = ano;
        return this;
    }

    public String getIdade() {
        return idade;
    }

    public Veiculo setIdade(String idade) {
        this.idade = idade;
        return this;
    }

    public String getValorBase() {
        return valorBase;
    }

    public Veiculo setValorBase(String valorBase) {
        this.valorBase = valorBase;
        return this;
    }
}
