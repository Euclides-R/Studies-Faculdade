package estacio.prova.av2.dao;

import estacio.prova.av2.jdbc.ConnectionBD;
import estacio.prova.av2.model.Variaveis_de_comunicacao;
import java.awt.HeadlessException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;

/**
 *
 * @author Euclides Rodrigues Junior
 */
public class ComandosSQL {

    private final Connection con;

    public ComandosSQL() {
        this.con = ConnectionBD.getConnection();
    }

    // Métodos para CadastrarCliente
    public void cadastrarCliente(Variaveis_de_comunicacao objClientes) {
        try {
            // 1 - Comandos para inserção de dados no banco de dados
            String sql = "insert into provafinal (nome, id_agencia, id_conta, nasc, saldo) values (?,?,?,?,?)";

            try ( // 2 - Comando de comunicação para inserir os dados
                PreparedStatement stmt = con.prepareStatement(sql)) {
                stmt.setString(1, objClientes.getNome());
                stmt.setInt(2, objClientes.getId_agencia());
                stmt.setInt(3, objClientes.getId_conta());
                stmt.setInt(4, objClientes.getNasc());
                stmt.setDouble(5, objClientes.getSaldo_real());

                // 3 - Executando e encerrando o comando
                stmt.execute();
            }

        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, "Erro: " + e);
        }
    }

    // Listar Clientes
    public List<Variaveis_de_comunicacao> mostrarSaldo(int cont) {
        //String comand = "SELECT id_agencia, id_conta, saldo FROM tb_clientes WHERE id_conta = '" + cont + "'";
        try {
            String comand = "SELECT id_agencia, id_conta, saldo FROM provafinal WHERE id_conta = '" + cont + "'";

            List<Variaveis_de_comunicacao> lista = new ArrayList<>();
            PreparedStatement mt;
            mt = con.prepareStatement(comand);
            ResultSet rs = mt.executeQuery();

            while (rs.next()) {
                Variaveis_de_comunicacao obj = new Variaveis_de_comunicacao();

                obj.setId_agencia(rs.getInt("id_agencia"));
                obj.setId_conta(rs.getInt("id_conta"));
                obj.setSaldo_real(rs.getDouble("saldo"));

                lista.add(obj);
            }
            return lista;
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, "Erro: " + e);
        }
        return null;
    }

    // Depositar saldo
    public void depositarSaldo(int conta, double addSaldo) throws SQLException {
        try {
            String sql = "UPDATE provafinal SET saldo = saldo+" + addSaldo + " where id_conta = " + conta;
            PreparedStatement mt;
            mt = con.prepareStatement(sql);
            mt.execute();
            JOptionPane.showMessageDialog(null, "Deposito realizado no valor de: " + addSaldo);                        
        } catch (HeadlessException e) {
            JOptionPane.showMessageDialog(null, "Erro: " + e);
        }
    }

    // Sacar saldo
    public void sacarSaldo(int conta, double dmsaldo) throws SQLException {
        try {
            String sql = "UPDATE provafinal SET saldo = saldo-" + dmsaldo + " where id_conta = " + conta;
            PreparedStatement mt;
            mt = con.prepareStatement(sql);
            mt.execute();
            JOptionPane.showMessageDialog(null, "Saque realizado no valor de: " + dmsaldo);                        
        } catch (HeadlessException e) {
            JOptionPane.showMessageDialog(null, "Erro: " + e);
        }
    }
}
