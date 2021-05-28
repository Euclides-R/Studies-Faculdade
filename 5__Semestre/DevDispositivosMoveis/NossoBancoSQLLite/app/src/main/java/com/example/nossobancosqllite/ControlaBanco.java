package com.example.nossobancosqllite;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.util.Log;
import java.util.ArrayList;
import java.util.HashMap;

public class ControlaBanco {
    private SQLiteDatabase db;
    CriaBancoSQLite meuBanco;
    public ControlaBanco (){ }
    public ControlaBanco (Context meuAPP){
        meuBanco = new CriaBancoSQLite(meuAPP);
    }
    public String inserir(String localTitulo, String localAutor, String localEditora) {
        ContentValues parametros;
        SQLiteDatabase db = meuBanco.getWritableDatabase();
        parametros = new ContentValues();
        parametros.put ("titulo",localTitulo);
        parametros.put ("editora",localEditora);
        parametros.put ("autor",localAutor);
        long res = db.insert(CriaBancoSQLite.NOME_TABELA , null,parametros);
        if (res == -1 ){
            return "Registro não inserido";
        }
        return "Registro inserido com sucesso.";
    }
    public ArrayList<HashMap<String, String>> carregaDados() {
        Cursor cursor;
        String[] campos = {CriaBancoSQLite.ID, "titulo"};
        db = meuBanco.getReadableDatabase();
        cursor = db.query(CriaBancoSQLite.NOME_TABELA , campos, null, null, null, null, null, null);
        ArrayList<HashMap<String, String>> registros = new ArrayList<HashMap<String, String>>();
        try {
            // Percorre todos os registros do cursor
            while (cursor.moveToNext()) {
                // Carrega os atributos do Banco de Dados
                System.out.println ("Registro: " + cursor.getLong(0) + " " + cursor.getString(1));
                HashMap<String, String> item = new HashMap<String, String>();
                item.put(CriaBancoSQLite.ID, "ID Livro: " + cursor.getLong(0));
                item.put("titulo", "Titulo Livro: " +  cursor.getString(1));
                registros.add(item);
            }
        } catch (Exception e) {
            Log.i("LOG: ", e.getMessage());
        } finally {
            // Garante o fechamento do Banco de Dados
            cursor.close();
            db.close();
        }
        return registros;
    }
}
