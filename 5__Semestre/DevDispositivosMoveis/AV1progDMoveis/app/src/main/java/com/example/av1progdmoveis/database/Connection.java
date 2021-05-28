package com.example.av1progdmoveis.database;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class Connection extends SQLiteOpenHelper {

    public static final int VERSION = 1;
    public static final String NAME = "veiculosbanco";

    public Connection(Context context) {
        super(context, NAME, null, VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        db.execSQL("CREATE TABLE veiculos (" +
                "id integer PRIMARY KEY autoincrement, " +
                "placa varchar(50) , " +
                "modelo varchar(50) ," +
                "idade varchar(50) ," +
                "valor varchar(50) )");
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
