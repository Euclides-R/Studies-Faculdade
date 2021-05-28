package prova.progII;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;

public class Exerc04 {
	public static void main(String[] args) {
		new Exerc04().processar();
	}
	
	private void processar() {
		List<Exerc03> listaFaqs = puxarTodosItens();
		for (Exerc03 faq : listaFaqs) {
			System.out.println(faq);

		}
		Exerc03 item = selecionarITEM(1);
		JOptionPane.showMessageDialog(null, item);
	}
	
	private Exerc03 selecionarITEM(int i) {
		StringBuilder sql = new StringBuilder();
		Exerc03 linha = new Exerc03();
		sql.append("SELECT ");
		sql.append(" ID_PAI");
		sql.append(",");
		sql.append(" ID_DETALHE");
		sql.append(",");
		sql.append(" DESC_ITEM");
		sql.append(" FROM");
		sql.append(" FAQ_FACULDADE_PAI");
		sql.append(" WHERE");
		sql.append(" ID_DETALHE");
		sql.append(" =?");

		// SELECT ID_PAI , ID_DETALHE , DESC_ITEM FROM FAQ_FACULDADE_PAI
		System.out.println("Comando select por Item: " + sql);
		// doule 1 doule 2
		List<Exerc03> listaFaqs = new ArrayList<>();
		Exerc01 minhaClasseCon = new Exerc01();
		try (Connection con = minhaClasseCon.conectarBanco();
				PreparedStatement pstmt = con.prepareStatement(sql.toString());) {
			pstmt.setInt(1, i);
			
			try (ResultSet rs = pstmt.executeQuery();) {
				while (rs.next()) {
					linha.setNumerosINTERIOS(rs.getInt("ID_PAI"));
					linha.setNinteiros(rs.getInt("ID_DETALHE"));
					linha.setDescricao(rs.getString("DESC_ITEM"));
				}
			}
		} catch (Exception e) {
			System.out.println("Erro: " + e.toString());
		}
		return linha;
	}

	public List<Exerc03> puxarTodosItens() {
		StringBuilder sql = new StringBuilder();
		sql.append("SELECT");
		sql.append(" ID_DETALHE_PAI");
		sql.append(", ");
		sql.append(" ID_DETALHE");
		sql.append(", ");
		sql.append(" FROM");
		sql.append(" FAQ_FACULDADE_PAI");
		System.out.println("Comando select: " + sql);
		// doule 1 doule 2
		List<Exerc03> listaFaqs = new ArrayList<>();
		Exerc01 mCC = new Exerc01();
		try (Connection con = mCC.conectarBanco();
				PreparedStatement pstmt = con.prepareStatement(sql.toString());) {
			try (ResultSet rs = pstmt.executeQuery();) {
				while (rs.next()) {
					Exerc03 list = new Exerc03();
					list.setNumerosINTERIOS(rs.getInt("ID_PAI"));
					list.setNinteiros(rs.getInt("ID_DETALHE"));
					list.setDescricao(rs.getString("DESC_ITEM"));
					listaFaqs.add(list);
				}
			}
		} catch (Exception e) {
			System.out.println("Erro: " + e.toString());
		}
		return listaFaqs;
	}
}
