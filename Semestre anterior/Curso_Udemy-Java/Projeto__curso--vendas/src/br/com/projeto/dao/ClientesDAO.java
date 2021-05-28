package br.com.projeto.dao;

import br.com.projeto.jdbc.ConnectionFactory;
import br.com.projeto.model.Clientes;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;

/**
 *
 * @author euclides rodrigues junior
 */
public class ClientesDAO {
    
    private final Connection con;
    
    public ClientesDAO(){
        this.con = ConnectionFactory.getConnection();
    }
    
    // Métodos para CadastrarCliente
    public void cadastrarCliente(Clientes objClientes) {
        try {
            // 1 - Comandos para inserção de dados no banco de dados
            String sql = "insert into tb_clientes (nome, rg, cpf, email, telefone, celular, "
                    + "cep, endereco, numero, complemento, bairro, cidade, estado)"
                    + " values (?,?,?,?,?,?,?,?,?,?,?,?,?)";
            
            try ( // 2 - Comando de comunicação para inserir os dados
                PreparedStatement stmt = con.prepareStatement(sql)) {
                stmt.setString(1, objClientes.getNome());
                stmt.setString(2, objClientes.getRg());
                stmt.setString(3, objClientes.getCpf());
                stmt.setString(4, objClientes.getEmail());
                stmt.setString(5, objClientes.getTelefone());
                stmt.setString(6, objClientes.getCelular());
                stmt.setString(7, objClientes.getCep());
                stmt.setString(8, objClientes.getEndereco());
                stmt.setInt(9, objClientes.getNumero());
                stmt.setString(10, objClientes.getComplemento());
                stmt.setString(11, objClientes.getBairro());
                stmt.setString(12, objClientes.getCidade());
                stmt.setString(13, objClientes.getEstado());
                
                // 3 - Executando e encerrando o comando
                stmt.execute();
            }
            
            JOptionPane.showMessageDialog(null, "Cadastrado com Sucesso!");
            
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, "Erro: " + e);
        }
    }
    
    // Alterar Cliente
    public void alterarCliente() {
    }
    
    // Excluir Cliente
    public void excluirCliente() {
    }
    
    // Listar Clientes
    public List<Clientes> listarClientes() {
        try {
            // 1 - Criar lista
            List<Clientes> lista = new ArrayList<>();
            
            // 2 - Comando sql
            String comand = "SELECT * FROM tb_clientes";
            PreparedStatement mt;
            mt = con.prepareStatement(comand);
            ResultSet rs = mt.executeQuery();
            
            while (rs.next()) {
                Clientes obj = new Clientes();
                
                obj.setId_código(rs.getInt("id"));
                obj.setNome(rs.getString("nome"));
                obj.setRg(rs.getString("rg"));
                obj.setCpf(rs.getString("cpf"));
                obj.setEmail(rs.getString("email"));
                obj.setTelefone(rs.getString("telefone"));
                obj.setCelular(rs.getString("celular"));
                obj.setCep(rs.getString("cep"));
                obj.setEndereco(rs.getString("endereco"));
                obj.setNumero(rs.getInt("numero"));
                obj.setComplemento(rs.getString("complemento"));
                obj.setBairro(rs.getString("bairro"));
                obj.setCidade(rs.getString("cidade"));
                obj.setEstado(rs.getString("estado"));
                
                lista.add(obj);
            }
           return lista; 
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, "Erro: " + e);
        }
        return null;
    }
}
