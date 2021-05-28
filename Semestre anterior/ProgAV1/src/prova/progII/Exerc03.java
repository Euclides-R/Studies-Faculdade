package prova.progII;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class Exerc03 {
	private int NumerosINTERIOS;
	private int Ninteiros;
	private String descricao;
	
	public static void main(String[] args) {
		new Exerc03().processar();
	}
	
	public int getNumerosINTERIOS() {
		return NumerosINTERIOS;
	}
	public void setNumerosINTERIOS(int numerosINTERIOS) {
		NumerosINTERIOS = numerosINTERIOS;
	}
	public int getNinteiros() {
		return Ninteiros;
	}
	public void setNinteiros(int ninteiros) {
		Ninteiros = ninteiros;
	}
	public String getDescricao() {
		return descricao;
	}
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	@Override
	public String toString() {
		return "Exerc03 [NumerosINTERIOS=" + NumerosINTERIOS + ", Ninteiros=" + Ninteiros + ", descricao=" + descricao
				+ "]";
	}
	
	public Exerc03() { 
		
	}
	public Exerc03(int num, int ndois, String descricao) {
		super();
		this.NumerosINTERIOS = num;
		this.Ninteiros = ndois;
		this.descricao = descricao;
	}
	
	public void processar() {
		Exerc03 f = new Exerc03(1, 1, "Teste 1");
		insereDados(f);
		f = new Exerc03(1, 2, "Teste 2");
		insereDados(f);
		f = new Exerc03(1, 3, "Teste 3");
		insereDados(f);
	}
	
	// Exerc�cio 03
		public void insereDados(Exerc03 faq) {
			StringBuilder sql = new StringBuilder();
			sql.append("INSERT_INTO ");
			sql.append(" FAQ_FACULDADE_PAI ");
			sql.append("(");

			sql.append("ID_PAI");
			sql.append(", ");
			sql.append(" ID_DETALHE");
			sql.append(", ");
			sql.append(" DESC_ITEM");
			sql.append(") ");
			sql.append(" VALUES ");
			sql.append("(");
			sql.append(" ? ");
			sql.append(",");
			sql.append(" ? ");
			sql.append(" , ");
			sql.append(" ? ");
			sql.append(")");
			System.out.println("Comando insert: " + sql);

			Exerc01 MC = new Exerc01();
			try (Connection c = MC.conectarBanco();
				PreparedStatement pstmCli = c.prepareStatement(sql.toString());) {

				pstmCli.setInt(1, faq.getNinteiros());
				pstmCli.setInt(2, faq.getNumerosINTERIOS());
				pstmCli.setString(3, faq.getDescricao());
				
			} catch (SQLException e) {
				if ("23505".equals(e.getSQLState())) {
					System.out.println("Item duplicado");
				} else {
					e.printStackTrace();
				}
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
}
