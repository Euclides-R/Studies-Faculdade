package com.example.trabalho_banco_douglas.database;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import androidx.annotation.Nullable;

public class Connection extends SQLiteOpenHelper {

    public static final int VERSION = 1;
    public static final String NAME = "bank";

    public Connection(Context context) {
        super(context, NAME, null, VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        db.execSQL("CREATE TABLE users (" +
                "id integer PRIMARY KEY autoincrement, " +
                "name varchar(50) , " +
                "account varchar(50) ," +
                "agency varchar(50) ," +
                "balance varchar(50) )");


    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
