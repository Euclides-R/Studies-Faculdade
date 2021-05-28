package com.example.trabalho_banco_douglas.models;

public class User {

    private int id;
    private String balance;
    private String account;
    private String agency;
    private String name;

    public int getId() {
        return id;
    }

    public User setId(int id) {
        this.id = id;
        return this;
    }

    public String getBalance() {
        return balance;
    }

    public User setBalance(String balance) {
        this.balance = balance;
        return this;
    }

    public String getAccount() {
        return account;
    }

    public User setAccount(String account) {
        this.account = account;
        return this;
    }

    public String getAgency() {
        return agency;
    }

    public User setAgency(String agency) {
        this.agency = agency;
        return this;
    }

    public String getName() {
        return name;
    }

    public User setName(String name) {
        this.name = name;
        return this;
    }
}
