package com.example.intent;

import java.io.Serializable;

public class PessoaVO implements Serializable {
    private String nome;
    private int idade;
    private double valorHora;

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public void setValorHora(double valorHora) {
        this.valorHora = valorHora;
    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    public double getValorHora() {
        return valorHora;
    }
}
