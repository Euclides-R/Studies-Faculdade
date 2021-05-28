package com.example.nossobancosqllite;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import androidx.annotation.Nullable;
public class CriaBancoSQLite extends SQLiteOpenHelper {
    public static final String ID = "id";
    private static final String NOME_BANCO = "banco.db";
    private static final int VERSAO_BD = 3;
    public static final String NOME_TABELA = "livros_faculdade";
    //https://developer.android.com/reference/android/database/sqlite/SQLiteOpenHelper
    public CriaBancoSQLite (Context meuCTX){
        super (meuCTX , NOME_BANCO ,null, VERSAO_BD);
    }
    public CriaBancoSQLite(@Nullable Context context, @Nullable String name, @Nullable SQLiteDatabase.CursorFactory factory, int version) {
        super(context, name, factory, version);
    }
    @Override
    public void onCreate(SQLiteDatabase db) {
        try {
            String minhaTabela = " create table " + NOME_TABELA + " ( " + ID + " integer primary key autoincrement , titulo text , autor text , editora text ) ";
            db.execSQL(minhaTabela);
        }
        catch (android.database.sqlite.SQLiteException e){
            System.out.println ("Tabela ja existe.");
            e.printStackTrace();
        }
    }
    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        String minhaTabela = " drop table if exists " + NOME_TABELA +"";
    }
}
