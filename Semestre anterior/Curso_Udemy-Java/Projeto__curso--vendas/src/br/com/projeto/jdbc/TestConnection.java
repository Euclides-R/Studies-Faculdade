package br.com.projeto.jdbc;

import javax.swing.JOptionPane;

/**
 *
 * @author euclides rodrigues junior
 */
public class TestConnection {
    public static void main(String[] args) {
        try {
            new ConnectionFactory().getConnection();
            JOptionPane.showMessageDialog(null, "Conectado!");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, " erro:" + e);
        }
    }
}
