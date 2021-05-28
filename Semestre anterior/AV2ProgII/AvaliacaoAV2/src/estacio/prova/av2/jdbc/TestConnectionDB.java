package estacio.prova.av2.jdbc;

import javax.swing.JOptionPane;

/**
 *
 * @author Euclides Rodrigues Junior
 */
public class TestConnectionDB {
    
    public static void main(String[] args) {
        try {
            new ConnectionBD().getConnection();
            JOptionPane.showMessageDialog(null, "Conectado!");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, " erro:" + e);
        }
    }
    
}
